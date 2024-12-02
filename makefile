
BUILD_DIR = build
ASMSOURCES = $(shell find asm -name *.s)
ASMDIRS = $(sort $(dir $(ASMSOURCES)))
ASMOBJECTS = $(addprefix $(BUILD_DIR)/, $(patsubst %.s, %.o, $(ASMSOURCES)))

CROSS = tools/mips64-elf-
AS = $(CROSS)as.exe
OBJCOPY = $(CROSS)objcopy.exe
ASFLAGS = -march=vr4300 -mtune=vr4300 -Iinclude -no-pad-sections

LD = tools/mips64-elf-ld.exe

default: all

all: clean split rom.z64

vpath %.s $(ASMDIRS)

$(ASMOBJECTS): $(BUILD_DIR)/%.o: %.s
	$(AS) $(ASFLAGS) $< -o $@

rom.elf: $(ASMOBJECTS)
	$(LD) -Map gexenterthegecko.map $(ASMOBJECTS) -T gexenterthegecko.ld -T undefined_funcs_auto.txt -T undefined_syms_auto.txt -o $@

split:
	cmd.exe /c splat split gexenterthegecko.yaml

rom.z64: rom.elf
	$(OBJCOPY) -O binary --pad-to 0x1000000 rom.elf rom.z64

build: rom.z64

diff:
	cmd.exe /c py diffcheck.py

clean:
	rm -rf build/
	rm -rf asm/
	rm -rf assets/
	rm -f rom.elf
	rm -f rom.z64
	mkdir -p build/asm/data

.PHONY: all clean default split build diff
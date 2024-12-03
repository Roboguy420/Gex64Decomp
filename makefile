
BUILD_DIR = build
ASMSOURCES := $(shell find asm -not \( -path asm/nonmatchings -prune \) -name "*.s")
CSOURCES := $(shell find src -name *.c)
ASMDIRS := $(sort $(dir $(ASMSOURCES)))
CDIRS := $(sort $(dir $(CSOURCES)))
ASMOBJECTS := $(addprefix $(BUILD_DIR)/, $(patsubst %.s, %.o, $(ASMSOURCES)))
COBJECTS := $(addprefix $(BUILD_DIR)/, $(patsubst %.c, %.o, $(CSOURCES)))

AS = tools/as
OBJCOPY = tools/mips64-elf-objcopy.exe
COMMONFLAGS = -mabi=32 -mips3 -mfp32 -mgp32
ASFLAGS = -march=vr4300 -mtune=vr4300 -Iinclude -no-pad-sections -G0 $(COMMONFLAGS)
CC = tools/gcc
CFLAGS = -Iinclude -c -O2 -nostdinc -fno-PIC -G 0 -mno-abicalls -g3 $(COMMONFLAGS)
LD = tools/mips64-elf-ld.exe

default: all

all: clean split rom.z64

vpath %.s $(ASMDIRS)
vpath %.s $(CDIRS)

$(ASMOBJECTS): $(BUILD_DIR)/%.o: %.s
	$(AS) $(ASFLAGS) $< -o $@

$(COBJECTS): $(BUILD_DIR)/%.o: %.c
	$(CC) $(CFLAGS) $< -o $@

rom.elf: $(ASMOBJECTS) $(COBJECTS)
	$(LD) -Map gexenterthegecko.map $(ASMOBJECTS) $(COBJECTS) -T gexenterthegecko.ld -T undefined_funcs_auto.txt -T undefined_syms_auto.txt -o $@

split:
	python3 -m splat split gexenterthegecko.yaml

rom.z64: rom.elf
	$(OBJCOPY) -O binary --pad-to 0x1000000 rom.elf rom.z64

build: rom.z64

diff:
	python3 diffcheck.py

clean:
	rm -rf build/
	rm -rf asm/
	rm -rf assets/
	rm -f rom.elf
	rm -f rom.z64
	mkdir -p build/asm/data
	mkdir -p build/asm/ultralib
	mkdir -p build/src

.PHONY: all clean default split build diff
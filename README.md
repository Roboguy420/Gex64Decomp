# Gex 64: Enter the Gecko

W.I.P. decompilation of Gex 64

## Dependencies

* Python 3.11+, and install the required modules via `python3 -m pip install -r requirements.txt`
* Bash or WSL if on Windows. Untested on Linux.
    * Note that the files should be in your home directory if using Windows (`/home/(you)/Gex64Decomp`) rather than on a Windows directory. GCC doesn't like it, for some reason.
* Make

## Setup

1. Procure your legal ROM of Gex 64: Enter the Gecko (USA) and place it into the root folder, and rename it to `gex64.z64`.
    * It must be a big endian rom in the z64 format. If you have a .n64 or other copy, it can be converted online.
2. Open a shell in the root folder and run the `make clean`, followed by the `make split` command. This will generate any required files.
    * `make build` will assemble the assembly files, compile the source files, link them together and create the new .z64 rom file.
    * `make diff` can be used to see if the rom has any differences to the original rom. Preferably, they should match.

## Contributing
Swap out `asm` segments in `gexenterthegecko.yaml` with `c`, and split again. Once a file is completed up to a certain point, you can create a Pull Request, as long as the diffing tool says the roms are matching after a clean build. For more information on how to process the files, visit [the Splat64 wiki](https://github.com/ethteck/splat/wiki/General-Workflow) and [decomp.me](https://decomp.me/).

The flags this build uses is generally just `-O2`, with `-g3` for temporary help on decomp.me (if you're getting extra `nop`s, remove it), and some files require -mips3 to compile, but most of the game compiles without it.

There is currently no naming scheme, but at the very least:
* Global functions should be named in PascalCase
* Enums follow a `EEnumType` form, and each entry follows a shorter `EET_EntryName`. See `TVTextData.h`.

After converting an assembly file to a C file in the yaml file, make sure to add it to either `mips1.source.txt` or `mips3.source.txt`, otherwise it won't compile and you'll get a linking error. You should always try `mips1.source.txt` first.

# Gex 64: Enter the Gecko

W.I.P. decompilation of Gex 64

## Dependencies

* Python 3.11+ and splat64[mips] v0.30.1
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
Swap out `asm` segments in `gexenterthegecko.yaml` with `c`, and split again. Once a file is completed (either completely or up to a reasonable point), you can create a Pull Request, as long as the diffing tool says the roms are matching after a clean build. For more information on how to process the files, visit [the Splat64 wiki](https://github.com/ethteck/splat/wiki/General-Workflow) and [decomp.me](https://decomp.me/), using the `Duke Nukem Zero Hour` preset, or the flags `-O2 -nostdinc -fno-PIC -G 0 -mno-abicalls -g3 -mips3 -mfp32 -mgp32` and compiler `GCC 2.7.2 (KMC)`.
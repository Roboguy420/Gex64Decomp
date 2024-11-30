# Gex 64: Enter the Gecko

W.I.P. decompilation of Gex 64

## Dependencies

* Python 3.11+ and splat64[mips] v0.30.1
* Bash if on Windows. WSL probably also works. Untested on Linux.
* Make

## Setup

1. Procure your legal ROM of Gex 64: Enter the Gecko (USA) and place it into the root folder, and rename it to `gex.z64`.
    * It must be a big endian rom in the z64 format. If you have a .n64 or other copy, it can be converted online.
2. Open a shell in the root folder and run the `make split` command. This will generate any required files. Optionally, you can just run `make` to clean up, split, and build the rom in one go. `make diff` can be used to see if the rom has any differences to the original rom.
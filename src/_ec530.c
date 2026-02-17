#include "common.h"

void func_80159720_EC530(int* arg0, int** arg1)
{
    arg0[0x10/4] |= 0xC00;
    arg1[0xC/4][0x10/4] |= 0x800;
}

INCLUDE_ASM("asm/nonmatchings/_ec530", func_8015974C_EC55C);

INCLUDE_ASM("asm/nonmatchings/_ec530", func_801599A8_EC7B8);

INCLUDE_RODATA("asm/nonmatchings/_ec530", D_8015A0A4_ECEB4);

INCLUDE_ASM("asm/nonmatchings/_ec530", func_80159A3C_EC84C);

void func_800159AE4_EC8F4(int* arg0)
{
    ((short*)arg0)[0x64/2] = 0xC8;
    arg0[0x104/4] = 0x50;
    arg0[0x10/4] |= 0x400;
}

INCLUDE_ASM("asm/nonmatchings/_ec530", func_80159B04_EC914);

INCLUDE_ASM("asm/nonmatchings/_ec530", func_80159B68_EC978);

void func_80159BA0_EC9B0(void) {
}

INCLUDE_ASM("asm/nonmatchings/_ec530", func_80159BA8_EC9B8);

INCLUDE_ASM("asm/nonmatchings/_ec530", func_80159C68_ECA78);

INCLUDE_ASM("asm/nonmatchings/_ec530", func_80159CC8_ECAD8);

INCLUDE_ASM("asm/nonmatchings/_ec530", func_80159DA0_ECBB0);

INCLUDE_ASM("asm/nonmatchings/_ec530", func_80159EF0_ECD00);

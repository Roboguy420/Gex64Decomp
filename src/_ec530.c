#include "common.h"

void func_80159720_EC530(int* arg0, int** arg1)
{
    arg0[0x10/4] |= 0xC00;
    arg1[0xC/4][0x10/4] |= 0x800;
}

INCLUDE_ASM("asm/nonmatchings/_ec530", func_8015974C_EC55C);

extern char D_8006CF20;
extern int D_8006FA54;

void func_801599A8_EC7B8(short* arg0, short** arg1) {
    D_8006CF20 = 0;
    D_8006FA54 = 0xD;
    ((int*)arg0)[0x104/4] = 0;
    ((int*)arg0)[0x10/4] |= 0x400;
    func_8002C1AC(0);
    arg1[0x8/4][0x30/2] = 0xFA0;
    arg0[0x60/2] = 0x3FE;
    arg0[0x62/2] = 0x6E1;
    arg0[0x64/2]= 1;
    arg0[0x48/2] = 0x10EC;
    arg0[0x4A/2] = 0x12C0;
    arg0[0x4C/2] = -0x460;
}

INCLUDE_RODATA("asm/nonmatchings/_ec530", D_8015A0A4_ECEB4);

INCLUDE_ASM("asm/nonmatchings/_ec530", func_80159A3C_EC84C);

void func_80159AE4_EC8F4(int* arg0)
{
    ((short*)arg0)[0x64/2] = 0xC8;
    arg0[0x104/4] = 0x50;
    arg0[0x10/4] |= 0x400;
}

INCLUDE_ASM("asm/nonmatchings/_ec530", func_80159B04_EC914);

void func_80159B68_EC978(short* arg0, short** arg1)
{
    arg0[0x60/2] = 0x802;
    arg0[0x62/2] = -0x400;
    arg0[0x64/2] = 0;
    arg0[0x48/2] = arg1[0x8/4][0] + 0x32;
    arg0[0x4A/2] = 0x64;
    arg0[0x4C/2] = 0x64;
}

void func_80159BA0_EC9B0(void) {
}

INCLUDE_ASM("asm/nonmatchings/_ec530", func_80159BA8_EC9B8);

extern unsigned short D_800E5DB2;

void func_80159C68_ECA78(int* arg0)
{
    if (arg0[0x104/4] < 0x50) {
        arg0[0x104/4]++;
    }
    
    if ((D_800E5DB2 & 0x9000) || (arg0[0x104/4] == 0x50)) {
        func_8001A790();
    }
}

INCLUDE_ASM("asm/nonmatchings/_ec530", func_80159CC8_ECAD8);

INCLUDE_ASM("asm/nonmatchings/_ec530", func_80159DA0_ECBB0);

INCLUDE_ASM("asm/nonmatchings/_ec530", func_80159EF0_ECD00);

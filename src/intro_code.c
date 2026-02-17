#include "common.h"
#include "types/GameState.h"

extern char* D_8006CFA0;
extern int D_8006CF60;
extern int D_80154840;

INCLUDE_ASM("asm/nonmatchings/intro_code", func_80159720_A8550);

void func_801598A4_A86D4(int* arg0, int* arg1) {
    func_8002C1AC(0);
    arg0[0x104/4]--;
    if (arg0[0x104/4] == 0xAF) {
        D_80154840 = 0x171;
        func_80052758();
    }
    if (arg0[0x104/4] == 0) {
        ((short*)arg1)[0x9c/2] = -1;
        func_800396E0("map", "map5", gpGameState8);
        ((char*)gpGameState8)[0x4CDC] = 0;
        D_8006CF60 = 0;
    }
}

void func_80159944_A8774(short* arg0)
{
    ((int*)arg0)[0x104/4] = 0xB4;
    arg0[0x48/2] = 0x1117;
    arg0[0x4A/2] = 0x76C;
    arg0[0x4C/2] = 0x288;
    arg0[0x60/2] = 0x47E;
    arg0[0x62/2] = 0x6EA;
    arg0[0x64/2] = 0;
}

void func_8015997C_A87AC(short* arg0)
{
    if (((int*)arg0)[0x104/4])
    {
        ((int*)arg0)[0x104/4]--;
        return;
    }

    if (arg0[0x4C/2] >= 0x95)
    {
        arg0[0x4C/2] -= 0x14;
    }
    D_8006CFA0[0x4E] = 0;
}

void func_801599CC_A87FC(short* arg0)
{
    ((int*)arg0)[0x104/4] = 0xD2;
    arg0[0x48/2] = 0xE56;
    arg0[0x4A/2] = 0x76C;
    arg0[0x4C/2] = 0x55;
    arg0[0x60/2] = 0x400;
    arg0[0x62/2] = 0x6D6;
    arg0[0x64/2] = 0;
}

void func_80159A04_A8834(void) {
}

void func_80159A0C_A883C(short* arg0)
{
    ((int*)arg0)[0x104/4] = 0xD2;
    arg0[0x48/2] = 0x13BA;
    arg0[0x4A/2] = 0x76C;
    arg0[0x4C/2] = 0x32;
    arg0[0x60/2] = 0x400;
    arg0[0x62/2] = 0x6D6;
    arg0[0x64/2] = 0;
}

void func_80159A44_A8874(void) {
}

void func_80159A4C_A887C(short* arg0)
{
    ((int*)arg0)[0x104/4] = 0x12C;
    arg0[0x48/2] = 0x157C;
    arg0[0x4A/2] = 0x708;
    arg0[0x4C/2] = 0x55;
    arg0[0x60/2] = 0x4B0;
    arg0[0x62/2] = 0x6D6;
    arg0[0x64/2] = 0;
}

void func_80159A84_A88B4(void) {
}

void func_80159A8C_A88BC(short* arg0)
{
    ((int*)arg0)[0x104/4] = 0xFA;
    arg0[0x48/2] = 0x1770;
    arg0[0x4A/2] = 0xC80;
    arg0[0x4C/2] = -0x384;
    arg0[0x60/2] = 0x4B0;
    arg0[0x62/2] = 0x708;
    arg0[0x64/2] = 0;
}

void func_80159AC4_A88F4(int* arg0)
{
    if (arg0[0x104/4])
    {
        arg0[0x104/4]--;
    }

    if (arg0[0x104/4] < 0x32)
    {
        ((short*)arg0)[0x48/2] = 0xFA0;
    }
}

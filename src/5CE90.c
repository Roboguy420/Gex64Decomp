#include "common.h"

INCLUDE_ASM("asm/nonmatchings/5CE90", func_8005C290);

//INCLUDE_ASM("asm/nonmatchings/5CE90", func_8005C2E8);
char* func_8005C2E8(char* dst, char* src, int len) {
    strncpy(dst, src, len);
    return &dst[len];
}

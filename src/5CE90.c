#include "common.h"

INCLUDE_ASM("asm/nonmatchings/5CE90", func_8005C290);

char* func_8005C2E8(char* dst, char* src, int len) {
    cstrncpy(dst, src, len);
    return &dst[len];
}

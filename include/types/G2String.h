#ifndef G2STRING_H_
#define G2STRING_H_

typedef union
{
    char cstr[8];
    unsigned int raw[2];
} G2String;

// tomsons26: May be a memcmp; todo: test when memcmp found
#define G2String_Compare(a, b) ((a->raw[0] == ((G2String*)b)->raw[0]) && (a->raw[1] == ((G2String*)b)->raw[1]))

#endif
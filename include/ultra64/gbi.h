#ifndef GBI_H_
#define GBI_H_

// todo: replace this half-baked import with the proper Ultra64 imports

#define	G_RDPPIPESYNC		0xe7	
#define	G_DL			6
#define G_DL_PUSH		0x00
#define _SHIFTL(v, s, w)	\
    ((unsigned int) (((unsigned int)(v) & ((0x01 << (w)) - 1)) << (s)))
#define gDPNoParam(pkt, cmd)						\
{									\
	Gfx *_g = (Gfx *)(pkt);						\
									\
	_g->words.w0 = _SHIFTL(cmd, 24, 8);				\
	_g->words.w1 = 0;						\
}
#define	gDma1p(pkt, c, s, l, p)						\
{									\
	Gfx *_g = (Gfx *)(pkt);						\
									\
	_g->words.w0 = (_SHIFTL((c), 24, 8) | _SHIFTL((p), 16, 8) |	\
			_SHIFTL((l), 0, 16));				\
	_g->words.w1 = (unsigned int)(s);				\
}
#define	gDPPipeSync(pkt)	gDPNoParam(pkt, G_RDPPIPESYNC)
#define	gSPDisplayList(pkt,dl)	gDma1p(pkt,G_DL,dl,0,G_DL_PUSH)
typedef struct {
	unsigned int w0;
	unsigned int w1;
} Gwords;

typedef union {
	Gwords		words;
    long long int	force_structure_alignment;
} Gfx;

#endif
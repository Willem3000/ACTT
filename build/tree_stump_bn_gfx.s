
@{{BLOCK(tree_stump_bn_gfx)

@=======================================================================
@
@	tree_stump_bn_gfx, 32x16@4, 
@	+ palette 16 entries, not compressed
@	+ 8 tiles not compressed
@	Total size: 32 + 256 = 288
@
@	Time-stamp: 2023-07-29, 00:58:21
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global tree_stump_bn_gfxTiles		@ 256 unsigned chars
	.hidden tree_stump_bn_gfxTiles
tree_stump_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x33350000,0x55533500,0x33553350,0x55533520,0x33354110,0x33554110,0x54555110,0x54455413
	.word 0x00005333,0x00533335,0x05335333,0x01533555,0x11445333,0x21455545,0x22555545,0x22555445
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x33000000,0x33220000,0x55222000,0x54442000,0x00000000,0x20000000,0x20000000,0x20000000
	.word 0x55455413,0x55554445,0x45543334,0x11453333,0x11255333,0x00225522,0x00002442,0x00000004
	.word 0x12554445,0x11444444,0x15333444,0x55333554,0x54233555,0x44225522,0x42244200,0x42200000
	.word 0x00000005,0x00000455,0x00004455,0x00044422,0x00000022,0x00000000,0x00000000,0x00000000

	.section .rodata
	.align	2
	.global tree_stump_bn_gfxPal		@ 32 unsigned chars
	.hidden tree_stump_bn_gfxPal
tree_stump_bn_gfxPal:
	.hword 0x0000,0x2D50,0x3E58,0x471D,0x39F5,0x42BA,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(tree_stump_bn_gfx)

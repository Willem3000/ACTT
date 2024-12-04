
@{{BLOCK(grass_bn_gfx)

@=======================================================================
@
@	grass_bn_gfx, 32x32@4, 
@	+ palette 16 entries, not compressed
@	+ 16 tiles not compressed
@	Total size: 32 + 512 = 544
@
@	Time-stamp: 2023-07-25, 23:39:56
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global grass_bn_gfxTiles		@ 512 unsigned chars
	.hidden grass_bn_gfxTiles
grass_bn_gfxTiles:
	.word 0x55555555,0x22444447,0x24443347,0x24443337,0x44443337,0x44143447,0x11144447,0x11141447
	.word 0x55555555,0x44114422,0x41114422,0x41111442,0x44444442,0x22444444,0x22222444,0x22224441
	.word 0x55555555,0x22444444,0x24443344,0x24443333,0x44443334,0x44143444,0x11144444,0x11141444
	.word 0x55555555,0x64114422,0x61114422,0x61111442,0x64444442,0x62444444,0x62222444,0x62224441
	.word 0x41141147,0x44441117,0x44411117,0x44411147,0x41444447,0x11444427,0x11142227,0x11144227
	.word 0x42244444,0x42444333,0x44433333,0x44443334,0x11444334,0x11114434,0x11144444,0x14444441
	.word 0x41141144,0x44441114,0x44411111,0x44411144,0x41444444,0x11444424,0x11142224,0x11144224
	.word 0x62244444,0x62444333,0x64433333,0x64443334,0x61444334,0x61114434,0x61144444,0x64444441

	.word 0x44444447,0x22444447,0x24443347,0x24443337,0x44443337,0x44143447,0x11144447,0x11141447
	.word 0x44144444,0x44114422,0x41114422,0x41111442,0x44444442,0x22444444,0x22222444,0x22224441
	.word 0x44444444,0x22444444,0x24443344,0x24443333,0x44443334,0x44143444,0x11144444,0x11141444
	.word 0x64144444,0x64114422,0x61114422,0x61111442,0x64444442,0x62444444,0x62222444,0x62224441
	.word 0x41141147,0x44441117,0x44411117,0x44411147,0x41444447,0x11444427,0x11142227,0x88888888
	.word 0x42244444,0x42444333,0x44433333,0x44443334,0x11444334,0x11114434,0x11144444,0x88888888
	.word 0x41141144,0x44441114,0x44411111,0x44411144,0x41444444,0x11444424,0x11142224,0x88888888
	.word 0x62244444,0x62444333,0x64433333,0x64443334,0x61444334,0x61114434,0x61144444,0x88888888

	.section .rodata
	.align	2
	.global grass_bn_gfxPal		@ 32 unsigned chars
	.hidden grass_bn_gfxPal
grass_bn_gfxPal:
	.hword 0x0000,0x36C6,0x2ECB,0x4266,0x3604,0x001F,0x7C00,0x7FE0
	.hword 0x03FF,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(grass_bn_gfx)

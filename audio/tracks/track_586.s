.align 2

.section .rodata
.global track_586

track_586_0:
	.byte 188, 0, 187, 75, 189, 38, 190, 100
	.byte 191, 44, 193, 24, 192, 64, 253, 64
	.byte 80, 164, 190, 100, 131, 72, 131, 53
	.byte 131, 40, 131, 29, 131, 22, 131, 15
	.byte 131, 10, 131, 6, 131, 2, 130, 0
	.byte 129, 177

track_586_1:
	.byte 188, 0, 189, 38, 190, 100, 191, 44
	.byte 193, 24, 192, 64, 137, 250, 67, 80
	.byte 1, 160, 131, 190, 100, 131, 72, 131
	.byte 53, 131, 40, 131, 29, 131, 22, 131
	.byte 15, 131, 10, 131, 6, 131, 2, 130
	.byte 0, 129, 177

track_586_2:
	.byte 188, 0, 189, 39, 190, 0, 191, 44
	.byte 193, 48, 192, 127, 253, 60, 100, 132
	.byte 190, 78, 192, 64, 163, 190, 78, 131
	.byte 72, 131, 53, 131, 40, 131, 29, 131
	.byte 22, 131, 15, 131, 10, 131, 6, 131
	.byte 2, 130, 0, 129, 177

.align 2

track_586:
	.byte 3
	.byte 0
	.byte 229
	.byte 0
	.word voice_group17
	.word track_586_0
	.word track_586_1
	.word track_586_2

.align 2

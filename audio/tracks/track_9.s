.align 2

.section .rodata
.global track_9

track_9_0:
	.byte 188, 0, 187, 60, 189, 18, 190, 31
	.byte 191, 79, 247, 38, 80, 176, 247, 38
	.byte 92, 176, 38, 72, 176, 38, 80, 176
	.byte 38, 72, 176, 38, 80, 176, 38, 72
	.byte 176, 38, 80, 176, 38, 72, 176, 38
	.byte 76, 176, 178, 242, 232, 34, 8, 177
	.byte 

track_9_1:
	.byte 188, 0, 189, 19, 190, 25, 191, 47
	.byte 250, 45, 44, 176, 250, 45, 56, 176
	.byte 45, 72, 176, 45, 80, 176, 45, 72
	.byte 176, 45, 80, 176, 45, 72, 176, 45
	.byte 80, 176, 45, 72, 176, 45, 76, 176
	.byte 178, 32, 233, 34, 8, 177

track_9_2:
	.byte 188, 0, 189, 20, 190, 18, 191, 64
	.byte 176, 176, 223, 86, 80, 144, 86, 48
	.byte 144, 86, 24, 165, 180, 223, 94, 80
	.byte 144, 94, 48, 144, 94, 24, 165, 180
	.byte 89, 80, 144, 89, 48, 144, 89, 24
	.byte 165, 176, 179, 76, 233, 34, 8, 223
	.byte 96, 80, 144, 96, 48, 144, 96, 24
	.byte 165, 179, 87, 233, 34, 8, 176, 178
	.byte 75, 233, 34, 8, 177

.align 2

track_9:
	.byte 3
	.byte 0
	.byte 130
	.byte 0
	.word voice_group0
	.word track_9_0
	.word track_9_1
	.word track_9_2

.align 2

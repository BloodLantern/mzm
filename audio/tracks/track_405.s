.align 2

.section .rodata
.global track_405

track_405_0:
	.byte 188, 0, 187, 75, 189, 0, 196, 30
	.byte 190, 63, 191, 64, 193, 8, 194, 40
	.byte 192, 1, 238, 60, 100, 130, 192, 3
	.byte 130, 6, 130, 9, 130, 12, 130, 15
	.byte 130, 18, 130, 21, 130, 24, 130, 27
	.byte 130, 30, 130, 33, 130, 36, 130, 39
	.byte 130, 41, 130, 44, 130, 47, 130, 50
	.byte 130, 53, 130, 56, 130, 59, 130, 62
	.byte 129, 64, 129, 177

track_405_1:
	.byte 188, 0, 189, 3, 196, 30, 190, 70
	.byte 191, 64, 193, 6, 194, 120, 192, 1
	.byte 231, 53, 100, 130, 192, 3, 130, 6
	.byte 130, 9, 130, 12, 130, 15, 130, 18
	.byte 130, 21, 130, 24, 130, 27, 130, 30
	.byte 130, 33, 130, 36, 227, 130, 192, 39
	.byte 130, 41, 130, 44, 130, 47, 130, 50
	.byte 130, 53, 130, 56, 130, 59, 130, 62
	.byte 129, 64, 129, 177

.align 2

track_405:
	.byte 2
	.byte 0
	.byte 201
	.byte 0
	.word voice_group6
	.word track_405_0
	.word track_405_1

.align 2

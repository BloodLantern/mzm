.align 2

.section .rodata
.global track_11

track_11_0:
	.byte 188, 0, 187, 49, 189, 14, 190, 60
	.byte 191, 42, 186, 118, 255, 65, 120, 176
	.byte 168, 65, 92, 152, 176, 160, 65, 112
	.byte 160, 176, 152, 65, 92, 168, 176, 178
	.byte 226, 234, 34, 8, 177

track_11_1:
	.byte 188, 0, 189, 14, 190, 60, 191, 84
	.byte 186, 119, 255, 60, 120, 176, 168, 60
	.byte 112, 152, 176, 160, 60, 92, 160, 176
	.byte 152, 60, 112, 168, 176, 178, 7, 235
	.byte 34, 8, 177

track_11_2:
	.byte 188, 0, 189, 58, 190, 110, 191, 47
	.byte 186, 120, 255, 41, 92, 176, 41, 80
	.byte 176, 255, 176, 41, 72, 176, 41, 60
	.byte 176, 41, 92, 176, 41, 72, 176, 178
	.byte 42, 235, 34, 8, 177

.align 2

track_11:
	.byte 3
	.byte 0
	.byte 130
	.byte 0
	.word voice_group0
	.word track_11_0
	.word track_11_1
	.word track_11_2

.align 2

.a	WS	1
.f	PUSH	FP
	LD	FP,SP
	CALL	__stkChk
	LD	G0,.a
	CMP	G0,#1
	JLE	.L1
	LD	G0,.a
	CMP	G0,#7
	JLE	.L2
	LD	G0,#3
	ST	G0,.a
	JMP	.L3
.L2
	LD	G0,#5
	ST	G0,.a
.L3
	JMP	.L4
.L1
	LD	G0,#6
	ST	G0,.a
.L4
	LD	G0,.a
	CMP	G0,#2
	JLE	.L5
	LD	G0,.a
	CMP	G0,#8
	JLE	.L6
	LD	G0,#3
	ST	G0,.a
	JMP	.L7
.L6
	LD	G0,#5
	ST	G0,.a
.L7
.L5
	LD	G0,.a
	CMP	G0,#3
	JLE	.L8
	LD	G0,.a
	CMP	G0,#9
	JLE	.L9
	LD	G0,#3
	ST	G0,.a
.L9
	JMP	.L10
.L8
	LD	G0,#5
	ST	G0,.a
.L10
	LD	G0,.a
	CMP	G0,#4
	JLE	.L11
	LD	G0,.a
	CMP	G0,#10
	JLE	.L12
	LD	G0,#3
	ST	G0,.a
	JMP	.L13
.L12
	LD	G0,.a
	CMP	G0,#11
	JLE	.L14
	LD	G0,#4
	ST	G0,.a
.L14
.L13
	JMP	.L15
.L11
	LD	G0,#5
	ST	G0,.a
.L15
	LD	G0,.a
	CMP	G0,#5
	JLE	.L16
	JMP	.L17
.L16
.L17
	LD	G0,.a
	CMP	G0,#6
	JLE	.L18
	JMP	.L19
.L18
.L19
	POP	FP
	RET

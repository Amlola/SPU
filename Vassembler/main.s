	.file	"main.cpp"
	.intel_syntax noprefix
	.section	.text$_ZN4TextC1Ev,"x"
	.linkonce discard
	.align 2
	.globl	__ZN4TextC1Ev
	.def	__ZN4TextC1Ev;	.scl	2;	.type	32;	.endef
__ZN4TextC1Ev:
LFB11:
	.cfi_startproc
	push	ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	mov	ebp, esp
	.cfi_def_cfa_register 5
	sub	esp, 4
	mov	DWORD PTR [ebp-4], ecx
	mov	eax, DWORD PTR [ebp-4]
	mov	DWORD PTR [eax], 0
	mov	eax, DWORD PTR [ebp-4]
	mov	DWORD PTR [eax+8], 0
	mov	DWORD PTR [eax+12], 0
	mov	eax, DWORD PTR [ebp-4]
	mov	DWORD PTR [eax+16], 0
	mov	eax, DWORD PTR [ebp-4]
	mov	DWORD PTR [eax+20], 0
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE11:
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "rb\0"
LC1:
	.ascii "input_file.txt\0"
LC2:
	.ascii "wb\0"
LC3:
	.ascii "output_file_bin.bin\0"
LC4:
	.ascii "w\0"
LC5:
	.ascii "listing.txt\0"
LC6:
	.ascii ".\\main.cpp\0"
	.align 4
LC7:
	.ascii "file && file_output_bin && file_output_txt\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB8:
	.cfi_startproc
	.cfi_personality 0,___gxx_personality_v0
	.cfi_lsda 0,LLSDA8
	push	ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	mov	ebp, esp
	.cfi_def_cfa_register 5
	and	esp, -16
	sub	esp, 96
	call	___main
	mov	DWORD PTR [esp+56], 0
	mov	DWORD PTR [esp+64], 0
	mov	DWORD PTR [esp+68], 0
	mov	DWORD PTR [esp+72], 0
	mov	DWORD PTR [esp+76], 0
	lea	eax, [esp+56]
	mov	ecx, eax
	call	__ZN4TextC1Ev
	mov	DWORD PTR [esp+4], OFFSET FLAT:LC0
	mov	DWORD PTR [esp], OFFSET FLAT:LC1
	call	_fopen
	mov	DWORD PTR [esp+92], eax
	lea	eax, [esp+56]
	mov	DWORD PTR [esp+4], eax
	mov	eax, DWORD PTR [esp+92]
	mov	DWORD PTR [esp], eax
LEHB0:
	call	__Z10File_inputP6_iobufP4Text
	mov	DWORD PTR [esp+44], 0
	mov	DWORD PTR [esp+48], 0
	mov	DWORD PTR [esp+52], 0
	lea	eax, [esp+44]
	mov	DWORD PTR [esp], eax
	call	__Z9LabelCtorP5Label
	mov	DWORD PTR [esp+4], OFFSET FLAT:LC2
	mov	DWORD PTR [esp], OFFSET FLAT:LC3
	call	_fopen
	mov	DWORD PTR [esp+88], eax
	mov	DWORD PTR [esp+4], OFFSET FLAT:LC4
	mov	DWORD PTR [esp], OFFSET FLAT:LC5
	call	_fopen
	mov	DWORD PTR [esp+84], eax
	cmp	DWORD PTR [esp+92], 0
	je	L3
	cmp	DWORD PTR [esp+88], 0
	je	L3
	cmp	DWORD PTR [esp+84], 0
	jne	L4
L3:
	mov	DWORD PTR [esp+8], 20
	mov	DWORD PTR [esp+4], OFFSET FLAT:LC6
	mov	DWORD PTR [esp], OFFSET FLAT:LC7
	call	__assert
L4:
	mov	eax, DWORD PTR [esp+76]
	lea	edx, [esp+44]
	mov	DWORD PTR [esp+16], edx
	lea	edx, [esp+56]
	mov	DWORD PTR [esp+12], edx
	mov	DWORD PTR [esp+8], eax
	mov	eax, DWORD PTR [esp+84]
	mov	DWORD PTR [esp+4], eax
	mov	eax, DWORD PTR [esp+88]
	mov	DWORD PTR [esp], eax
	call	__Z9AssemblerP6_iobufS0_P6StringP4TextP5Label
	mov	eax, DWORD PTR [esp+76]
	lea	edx, [esp+44]
	mov	DWORD PTR [esp+16], edx
	lea	edx, [esp+56]
	mov	DWORD PTR [esp+12], edx
	mov	DWORD PTR [esp+8], eax
	mov	eax, DWORD PTR [esp+84]
	mov	DWORD PTR [esp+4], eax
	mov	eax, DWORD PTR [esp+88]
	mov	DWORD PTR [esp], eax
	call	__Z9AssemblerP6_iobufS0_P6StringP4TextP5Label
	mov	eax, DWORD PTR [esp+88]
	mov	DWORD PTR [esp], eax
	call	_fclose
	mov	eax, DWORD PTR [esp+84]
	mov	DWORD PTR [esp], eax
	call	_fclose
	lea	eax, [esp+56]
	mov	DWORD PTR [esp], eax
	call	__Z4FreeP4Text
LEHE0:
	mov	eax, 0
	jmp	L8
L7:
	mov	DWORD PTR [esp], eax
LEHB1:
	call	__Unwind_Resume
LEHE1:
L8:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8:
	.def	___gxx_personality_v0;	.scl	2;	.type	32;	.endef
	.section	.gcc_except_table,"w"
LLSDA8:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 LLSDACSE8-LLSDACSB8
LLSDACSB8:
	.uleb128 LEHB0-LFB8
	.uleb128 LEHE0-LEHB0
	.uleb128 L7-LFB8
	.uleb128 0
	.uleb128 LEHB1-LFB8
	.uleb128 LEHE1-LEHB1
	.uleb128 0
	.uleb128 0
LLSDACSE8:
	.text
	.section .rdata,"dr"
	.align 4
__ZL8NRegistr:
	.long	4
	.align 8
__ZL14ForDoubleValue:
	.long	0
	.long	1083129856
	.align 4
__ZL10NumberJump:
	.long	12
	.align 4
__ZL8RAM_size:
	.long	100
LC8:
	.ascii "in\0"
LC9:
	.ascii "push\0"
LC10:
	.ascii "out\0"
LC11:
	.ascii "add\0"
LC12:
	.ascii "sub\0"
LC13:
	.ascii "mult\0"
LC14:
	.ascii "div\0"
LC15:
	.ascii "sqrt\0"
LC16:
	.ascii "sin\0"
LC17:
	.ascii "cos\0"
LC18:
	.ascii "hlt\0"
LC19:
	.ascii "pop\0"
LC20:
	.ascii "jmp\0"
LC21:
	.ascii "ja\0"
LC22:
	.ascii "jae\0"
LC23:
	.ascii "jb\0"
LC24:
	.ascii "jbe\0"
LC25:
	.ascii "je\0"
LC26:
	.ascii "jne\0"
LC27:
	.ascii "call\0"
LC28:
	.ascii "ret\0"
	.align 32
__ZL8CMD_LIST:
	.long	0
	.long	LC8
	.long	0
	.long	1
	.long	LC9
	.long	1
	.long	2
	.long	LC10
	.long	0
	.long	3
	.long	LC11
	.long	0
	.long	4
	.long	LC12
	.long	0
	.long	5
	.long	LC13
	.long	0
	.long	6
	.long	LC14
	.long	0
	.long	7
	.long	LC15
	.long	0
	.long	8
	.long	LC16
	.long	0
	.long	9
	.long	LC17
	.long	0
	.long	10
	.long	LC18
	.long	0
	.long	11
	.long	LC19
	.long	1
	.long	12
	.long	LC20
	.long	1
	.long	13
	.long	LC21
	.long	1
	.long	14
	.long	LC22
	.long	1
	.long	15
	.long	LC23
	.long	1
	.long	16
	.long	LC24
	.long	1
	.long	17
	.long	LC25
	.long	1
	.long	18
	.long	LC26
	.long	1
	.long	19
	.long	LC27
	.long	1
	.long	20
	.long	LC28
	.long	0
__ZL8REG_LIST:
	.ascii "rax\0"
	.ascii "rbx\0"
	.ascii "rcx\0"
	.ascii "rdx\0"
	.ident	"GCC: (GNU) 4.8.1"
	.def	_fopen;	.scl	2;	.type	32;	.endef
	.def	__Z10File_inputP6_iobufP4Text;	.scl	2;	.type	32;	.endef
	.def	__Z9LabelCtorP5Label;	.scl	2;	.type	32;	.endef
	.def	__assert;	.scl	2;	.type	32;	.endef
	.def	__Z9AssemblerP6_iobufS0_P6StringP4TextP5Label;	.scl	2;	.type	32;	.endef
	.def	_fclose;	.scl	2;	.type	32;	.endef
	.def	__Z4FreeP4Text;	.scl	2;	.type	32;	.endef
	.def	__Unwind_Resume;	.scl	2;	.type	32;	.endef

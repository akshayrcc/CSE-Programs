;This code is for second assignment. Accept ten 32bit and 64bit numbers and store them in array and display the same.

section .data
	acc32msg db 10,'Please enter ten 32 bit numbers(8 digits):',10,10
	acc32msg_len :equ $-acc32msg
	arr32msg db 10,'32-BIT ARRAY CONTENTS ARE::',10
	arr32msg_len:equ $-arr32msg
	entkeymsg db 10,'Press Enter Key to continue....'
	ekey_len:equ $-entkeymsg

	acc64msg db 10,'Please enter ten 64 bit numbers(16 digits):',10,10
	acc64msg_len :equ $-acc64msg
	arr64msg db 10,'64-BIT ARRAY CONTENTS ARE::',10
	arr64msg_len:equ $-arr64msg

	array32 times 80 db 0
	array64 times 160 db 0
	nxline db 10

	thankmsg db 10,'THANK YOU FOR USING ALP BY microsig.webs.com',10
	thankmsg_len:equ $-thankmsg

section .bss
	num32buff resb 9
	n32buff_len:equ $-num32buff

	num64buff resb 17
	n64buff_len:equ $-num64buff

	numcnt resw 1

%macro disp_msg 2
	mov eax,04
	mov ebx,01
	mov ecx,%1
	mov edx,%2
	int 80h
%endmacro

%macro readnum 2
	mov eax,03
	mov ebx,0
	mov ecx,%1
	mov edx,%2
	int 80h
%endmacro

section .text
	global _start

_start:

;FOR 32BIT NUMBERS

	disp_msg acc32msg,acc32msg_len

	mov word [numcnt],0
	mov edi,array32

up1:
	readnum num32buff,n32buff_len

	mov ecx,08h
	mov esi,num32buff

	rep movsb

	inc word[numcnt]

	cmp word[numcnt],10
	jne up1

	disp_msg entkeymsg,ekey_len
	readnum num32buff,1

	disp_msg arr32msg,arr32msg_len
	mov ecx,10
	mov esi,array32
up2:
	push ecx
	disp_msg esi,8


	add esi,8
	disp_msg nxline,1
	pop ecx
	loop up2

	disp_msg entkeymsg,ekey_len
	readnum num32buff,1


;FOR 64BIT NUMBERS

	disp_msg acc64msg,acc64msg_len

	mov word [numcnt],0
	mov edi,array64

up3:
	readnum num64buff,n64buff_len

	mov ecx,16
	mov esi,num64buff

	rep movsb

	inc word[numcnt]

	cmp word[numcnt],10
	jne up3

	disp_msg entkeymsg,ekey_len
	readnum num64buff,1

	disp_msg arr64msg,arr64msg_len
	mov ecx,10
	mov esi,array64
up4:
	push ecx
	disp_msg esi,16


	add esi,16
	disp_msg nxline,1
	pop ecx
	loop up4

	disp_msg entkeymsg,ekey_len
	readnum num64buff,1

	disp_msg thankmsg,thankmsg_len

	mov eax,1
	mov ebx,0
	int 80h

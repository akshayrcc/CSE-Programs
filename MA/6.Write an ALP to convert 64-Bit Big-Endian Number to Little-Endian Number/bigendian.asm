; ALP for Big Endian to Little Endian Conversion (64-bit)
;-------------------------------------------------------------------
section    .data
	nline		db	10,10
	nline_len:	equ	$-nline
	
	number		dq	1020304050607080H
	
	msg1		db	10,10, "Number in Big Endian Format is :	"
	msg1_len:	equ	$-msg1

	msg2		db	10,10,"Program : Big Endian to Little Endian Conversion (64-bit)"
			db	10,"_________________________________________________"	
			db	10,10, "Number in Little Endian Format is :	"
	msg2_len:	equ	$-msg2

;---------------------------------------------------------------------
Section   .bss
	no		resq	1		
	char_no		resb	16

;---------------------------------------------------------------------
;you can change the macros as per 64-bit convensions

%macro  print   2
	mov   eax, 4
	mov   ebx, 1
	mov   ecx, %1
	mov   edx, %2
	int   80h
%endmacro

%macro	exit	0
	mov  eax, 1
	mov  ebx, 0
	int  80h
%endmacro

;---------------------------------------------------------------------
; If U ARE MODIFYING 32-BIT PROGRAM then
; Check line by line and make all 'e' as 'r' and other modifications
; for 64-bit numbers

section    .text
	global   _start
_start:
	print	msg1, msg1_len
	mov 	rax,[number]		; load value of number in rax
	call 	disp64_proc		; display number

	mov	rbx, 0    		; final ans is in rbx
	mov	rdi,100H		; if divide by 100, 1 byte remainder

	mov	rax, [number]		; load no in rax
	mov	rcx, 8			; no. of bytes
	
next_byte:
	shl	rbx,8			; shift ans left 1 byte
	mov	rdx,00			; clear remainder
	div	rdi			; (rdx:rax)/100h
					; rax= Q, rdx=R
	add	rbx,rdx			; prepare final answer
	
	dec 	rcx
	jnz  	next_byte
	;loop	next_byte

	mov	[no], rbx		; store no

	print	msg2, msg2_len
	mov 	rax,[no]		; load value of no in rax
	call 	disp64_proc		; display no

	print	nline, nline_len
	exit
;--------------------------------------------------------------------	
disp64_proc:

	mov 	rsi,char_no+15	; load last byte address of char_no buffer in rsi
	mov 	rcx,16			; number of digits

cnt:	mov 	rdx,0			; make rdx=0 (as in div instruction rdx:rax/rbx)
	mov 	rbx,16			; divisor=16 for hex
	div 	rbx
	cmp 	dl, 09h			; check for remainder in RDX
	jbe  	add30
	add  	dl, 07h
add30:
	add 	dl,30h			; calculate ASCII code
	mov 	[rsi],dl		; store it in buffer
	dec 	rsi			; point to one byte back

	dec 	rcx			; decrement no
	jnz 	cnt			; if not zero repeat
	
	print char_no,16		; display result on screen
ret
;----------------------------------------------------------------


; ALP for 64-bit array logical operation: XOR
;-------------------------------------------------------------------
section    .data
	nline		db	10,10
	nline_len:	equ	$-nline
	
	arr64		dq	0000000055555555H, 11111111H, 11111111H, 11111111H, 11111111H
	n:		equ	5
	msg		db	10,10,"The result of XOR operation on 64-bit array elements is :	"
	msg_len:	equ	$-msg

;---------------------------------------------------------------------
Section   .bss
	ans		resq	1		
	char_sum	resb	16
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

	mov	rsi, arr64	
	mov	rdi, n
	
	mov	rax, 0    		;ans register

next_num:
	xor	rax,[rsi]

	add 	rsi,8			; 64 bit nos i.e. 8 bytes
	dec 	rdi
	jnz  	next_num

	mov	[ans], rax		; store ans

	print	msg, msg_len

	mov 	rax,[ans]		; load value of ans in rax
	call 	disp64_proc		; display sum

	print	nline, nline_len
	exit
;--------------------------------------------------------------------	
disp64_proc:

	mov 	rsi,char_sum+15		; load last byte address of char_sum buffer in rsi
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

	dec 	rcx			; decrement count
	jnz 	cnt			; if not zero repeat
	
	print char_sum,16		; display result on screen
ret
;----------------------------------------------------------------

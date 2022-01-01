; ALP to find no. of positive / negative elements from 64-bit array 
;-------------------------------------------------------------------
section    .data
	nline		db	10,10
	nline_len:	equ	$-nline
	
	arr64		dq	-11111111H, 22222222H, -33333333H, 44444444H, 55555555H
	n:		equ	5
	pmsg		db	10,10,"The no. of Positive elements from 64-bit array :	"
	pmsg_len:	equ	$-pmsg

	nmsg		db	10,10,"The no. of Negative elements from 64-bit array :	"
	nmsg_len:	equ	$-nmsg

;---------------------------------------------------------------------
Section   .bss
	p_count		resq	1		
	n_count		resq	1
	char_count	resb	16	; for 64-bit nos.
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
	
	mov	rbx,0;			; counter for 	+ve nos.
	mov	rcx,0;			; counter for	-ve nos.

next_num:
	mov	rax,[rsi]		; take no. in RAX
	Rol	rax,1			; rotate left 1 bit to check for sign bit 
	jc	negative

positive:
	inc	rbx			; no carry, so no. is +ve
	jmp	next

negative:
	inc	rcx			; carry, so no. is -ve

next:
	add 	rsi,8			; 64 bit nos i.e. 8 bytes
	dec 	rdi
	jnz  	next_num

	mov	[p_count], rbx		; store positive count
	mov	[n_count], rcx		; store negative count

	print	pmsg, pmsg_len
	mov 	rax,[p_count]		; load value of p_count in rax
	call 	disp64_proc		; display p_count

	print	nmsg, nmsg_len
	mov 	rax,[n_count]		; load value of n_count in rax
	call 	disp64_proc		; display n_count


	print	nline, nline_len
	exit
;--------------------------------------------------------------------	
disp64_proc:

	mov 	rsi,char_count+15	; load last byte address of char_count buffer in rsi
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
	
	print char_count,16		; display result on screen
ret
;----------------------------------------------------------------

; ALP to find no. of positive / negative elements from 32-bit array 
;-------------------------------------------------------------------
section    .data
	nline		db	10,10
	nline_len:	equ	$-nline
	
	arr32		dd	-11111111H, 22222222H, -33333333H, 44444444H, 55555555H
	n:		equ	5
	pmsg		db	10,10,"The no. of Positive elements in 32-bit array :	"
	pmsg_len:	equ	$-pmsg

	nmsg		db	10,10,"The no. of Negative elements in 32-bit array :	"
	nmsg_len:	equ	$-nmsg

;---------------------------------------------------------------------
Section   .bss
	p_count		resq	1		
	n_count		resq	1
	char_count	resb	8	; for 32-bit nos.
;---------------------------------------------------------------------

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

section    .text
	global   _start
_start:

	mov	esi, arr32	
	mov	edi, n
	
	mov	ebx,0;			; counter for 	+ve nos.
	mov	ecx,0;			; counter for	-ve nos.

next_num:
	mov	eax,[esi]		; take no. in RAX
	RCL	eax,1			; rotate left 1 bit to check for sign bit 
	jc	negative

positive:
	inc	ebx			; no carry, so no. is +ve
	jmp	next

negative:
	inc	ecx			; carry, so no. is -ve

next:
	add 	esi,4			; 32 bit nos i.e. 4 bytes
	dec 	edi
	jnz  	next_num

	mov	[p_count], ebx		; store positive count
	mov	[n_count], ecx		; store negative count

	print	pmsg, pmsg_len
	mov 	eax,[p_count]		; load value of p_count in rax
	call 	disp32_proc		; display p_count

	print	nmsg, nmsg_len
	mov 	eax,[n_count]		; load value of n_count in rax
	call 	disp32_proc		; display n_count


	print	nline, nline_len
	exit
;--------------------------------------------------------------------	
disp32_proc:

	mov 	esi,char_count+7	; load last byte address of char_count buffer in rsi
	mov 	ecx,8			; number of digits 

cnt:	mov 	edx,0			; make rdx=0 (as in div instruction rdx:rax/rbx)
	mov 	ebx,16			; divisor=16 for hex
	div 	ebx
	cmp 	dl, 09h			; check for remainder in RDX
	jbe  	add30
	add  	dl, 07h 
add30:
	add 	dl,30h			; calculate ASCII code
	mov 	[esi],dl		; store it in buffer
	dec 	esi			; point to one byte back

	dec 	ecx			; decrement count
	jnz 	cnt			; if not zero repeat
	
	print char_count,8		; display result on screen
ret
;----------------------------------------------------------------

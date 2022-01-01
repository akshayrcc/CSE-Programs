; ALP for 32-bit array addition without carry
;-------------------------------------------------------------------
section    .data
	nline		db	10,10
	nline_len:	equ	$-nline
	
	arr32		dd	00112233H, 00112233H, 00112233H, 00112233H, 00112233H
	n:		equ	5
	msg		db	10,10,"The sum of 32-bit array elements (without carry) is :	"
	msg_len:	equ	$-msg

;---------------------------------------------------------------------
Section   .bss
	sum		resd	1		
	char_sum		resb	8
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
	
	mov	eax, 0    		;sum register

next_num:
	add	eax,[esi]

	add 	esi,4			; 32 bit nos i.e. 4 bytes
	dec 	edi
	jnz  next_num

	mov	[sum], eax		; store sum

	print	msg, msg_len

	mov 	eax,[sum]		; load value of sum in eax
	call 	disp32_proc		; display sum

	print	nline, nline_len
	exit
;--------------------------------------------------------------------	
disp32_proc:

	mov 	esi,char_sum+7		; load last byte address of char_sum buffer in esi
	mov 	ecx,8			; number of digits 

cnt:	mov 	edx,0			; make edx=0 (as in div instruction edx:eax/ebx)
	mov 	ebx,16			; divisor=16 for hex
	div 	ebx
	cmp 	dl, 09h			; check for remainder in EDX
	jbe  	add30
	add  	dl, 07h 
add30:
	add 	dl,30h			; calculate ASCII code
	mov 	[esi],dl		; store it in buffer
	dec 	esi			; point to one byte back

	dec 	ecx			; decrement count
	jnz 	cnt			; if not zero repeat
	
	print char_sum,8		; display result on screen
ret
;----------------------------------------------------------------

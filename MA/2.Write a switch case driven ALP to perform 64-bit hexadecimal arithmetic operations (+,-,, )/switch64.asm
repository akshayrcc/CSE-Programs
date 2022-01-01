;ALP for switch case friven arithmetic operations on 64-bit array.

;--------------------------------------------------------------- 
section  .data
	nline		db	10,10
	nline_len:	equ	$-nline
	
	no1		dq	0000000000112233H
	no2		dq	0000000000112233H

	menu		db	10," ----------------Menu---------------- "
			db	10,"1. Addition"
			db	10,"2. Subtraction"
			db	10,"3. Multiplication"
			db	10,"4. Division"
			db	10,"5. Exit"
			db	10,10,"   Enter Your Choice: "
	menu_len:	equ	$-menu

	amsg		db	10,10,"Addition Result is :	"
	amsg_len:	equ	$-amsg

	smsg		db	10,10,"subtraction Result is :	"
	smsg_len:	equ	$-smsg

	mmsg		db	10,10,"multiplication Result is :	"
	mmsg_len:	equ	$-mmsg

	dmsg		db	10,10,"Division Result is :	"
	dmsg_len:	equ	$-dmsg

	emsg		db	10,10,"Exit from the Pgogram....", 10,10
	emsg_len:	equ	$-emsg

;--------------------------------------------------------------- 
Section  .bss
	choice		resb	2
	choice_len:	equ	$-choice

	ans		resq	1		
	char_ans	resb	16
;--------------------------------------------------------------- 
;you can change the macros as per 64-bit convensions

%macro  print   2
	mov   eax, 4
	mov   ebx, 1
	mov   ecx, %1
	mov   edx, %2
	int   80h
%endmacro

%macro  read   2
	mov   eax, 3
	mov   ebx, 0
	mov   ecx, %1
	mov   edx, %2
	int   80h
%endmacro

%macro	exit	0
	mov  eax, 1
	mov  ebx, 0
	int  80h
%endmacro

;--------------------------------------------------------------- 
; If U ARE MODIFYING 32-BIT PROGRAM then
; Check line by line and make all 'e' as 'r' and other modifications 
; for 64-bit numbers

section    .text
	global   _start
_start:
	print	menu, menu_len
	read	choice, choice_len
	
	mov	al,byte	[choice]	
case1:	
	CMP	al,'1'
	jne	case2
	call	add64_proc
	jmp	_start

case2:	
	CMP	al,'2'
	jne	case3
	call	sub64_proc
	jmp	_start

case3:	
	CMP	al,'3'
	jne	case4
	call	mul64_proc
	jmp	_start

case4:	
	CMP	al,'4'
	jne	caseexit
	call	div64_proc
	jmp	_start

caseexit:
	print	emsg,emsg_len
	exit
;--------------------------------------------------------------------		
add64_proc:	
	mov	rax,[no1]
	mov	rbx,[no2]

	add	rax,rbx
        mov	[ans], rax		; store ans

	print	amsg, amsg_len
	mov 	rax,[ans]			; load value of ans in rax
	call 	disp64_proc		; display ans

	print	nline, nline_len
	ret
;--------------------------------------------------------------------
sub64_proc:	
	mov	rax,[no1]
	mov	rbx,[no2]

	sub	rax,rbx
        mov	[ans], rax		; store ans

	print	smsg, smsg_len
	mov 	rax,[ans]			; load value of ans in rax
	call 	disp64_proc		; display ans

	print	nline, nline_len
	ret
;--------------------------------------------------------------------
mul64_proc:	
	mov	rax,[no1]
	mov	rbx,[no2]

	mul	rbx
        mov	[ans], rax		; store ans

	print	mmsg, mmsg_len
	mov 	rax,[ans]			; load value of ans in rax
	call 	disp64_proc		; display ans

	print	nline, nline_len
	ret
;--------------------------------------------------------------------
div64_proc:	
	mov	rdx,00
	mov	rax,[no1]
	mov	rbx,[no2]

	div	rbx				;(rdx:rax)/rbx
        mov	[ans], rax		; store ans

	print	dmsg, dmsg_len
	mov 	rax,[ans]			; load value of ans in rax
	call 	disp64_proc		; display ans

	print	nline, nline_len
	ret
;--------------------------------------------------------------------
disp64_proc:

	mov 	rsi,char_ans+15		; load last byte address of char_ans buffer in rsi
	mov 	rcx,16			; number of digits 

cnt:	mov 	rdx,0				; make rdx=0 (as in div instruction rdx:rax/rbx)
	mov 	rbx,16			; divisor=16 for hex
	div 	rbx
	cmp 	dl, 09h			; check for remainder in RDX
	jbe  	add30
	add  	dl, 07h 
add30:
	add 	dl,30h			; calculate ASCII code
	mov 	[rsi],dl			; store it in buffer
	dec 	rsi				; point to one byte back

	dec 	rcx				; decrement count
	jnz 	cnt				; if not zero repeat
	
	print char_ans,16		; display result on screen
ret
;----------------------------------------------------------------

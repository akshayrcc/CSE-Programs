
section .data
	msg db 'Enter String:',10
	msgLen:equ $-msg
	msg2 db 'You entered:'
	msg2_size:equ $-msg2
	msg3 db 'Your string size:'
	msg3_size:equ $-msg3
	thnkmsg db 10,'Run Successfully',10
	thnk_len:equ $-thnkmsg

section .bss
	buffer resb 50
	buffer_size:equ $-buffer
	count resd 1
	dcnt resb 1
	buffer_num resd 1 
	dispnum resb 8

section .text
	global _start
	

_start:
	mov eax,4
	mov ebx,1
	mov ecx, msg
	mov edx, msgLen
	int 80h
read:
	mov edx, buffer_size
	mov ecx, buffer
	mov ebx, 0
	mov eax, 3
	int 80h

	mov [count], eax
	
	mov eax, 4
	mov ebx, 1
	mov ecx, msg2
	mov edx, msg2_size
	int 80h

	mov eax, 4
	mov ebx, 1
	mov ecx, buffer
	mov edx, [count]
	int 80h

	mov eax, 4
	mov ebx, 1
	mov ecx, msg3
	mov edx, msg3_size
	int 80h

	mov esi,dispnum+7	;load last byte address of dispnum buffer in esi
	mov eax,[count]		;load value at count in eax
	mov ecx,8		;number of digits
	dec eax

cnt:	mov edx,0		;make edx=0 (as in div instruction edx:eax/ebx)
	mov ebx,10		;divisor=10
	div ebx
	add dl,30h		;calculate ASCII code
	mov [esi],dl		;store it in buffer
	dec esi			;point to one byte back
	loop cnt
;	dec ecx			;decrement count
;	jnz cnt			;if not zero repeat

up1:	mov eax,4
	mov ebx,1
	mov ecx,dispnum
	mov edx,8
	int 80h

	mov eax,4
	mov ebx,1
	mov ecx, thnkmsg
	mov edx, thnk_len
	int 80h

exit:	mov eax,1
	mov ebx,0
	int 80h

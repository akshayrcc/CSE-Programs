section .data
msg: db 'enter ten nos.'
len: equ $-msg

msg1: db 'entered nos are'
len1: equ $-msg1
count db 0

segment .bss
number: resb 2000

section .text
_start:
main:
mov edx,len
mov ecx,msg
mov ebx,1
mov eax,4
int 80h

mov esi,number
mov byte[count],10

loop1:
mov eax,3
mov ebx,0
mov ecx,esi
mov edx,8

int 80h

add esi,8
dec byte[count]
jnz loop1

mov edx,len1
mov ecx,msg1
mov ebx,1
mov eax,4
int 80h

mov esi,number
mov byte[count],10

loop2:
mov edx,8
mov ecx,esi
mov ebx,1
mov eax,4
int 80h

add esi,08h

dec byte[count]
jnz loop2

exit:
mov ebx,0
mov eax,1
int 80h


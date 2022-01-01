section .data
m1: db 10 "Enter the password",10
l1:equ $-m1
m2 db 10 "Access Granted",10
l1:equ $-m2
m3 db 10 "Access not Granted",10
l1:equ $-m3
star:db '*'
passwd:db "hello"
lenp: equ $-passwd
entpass: db 0
count: db 0
input:db 0

section .text
¬start:
gloabal main
main:

mov eax,4
mov ebx,1
mov ecx,m1
mov edx,l1
int 80h

mov esi,passwd
mov byte[count],5

loop1:
mov eax,3
mov ebx,0
mov ecx,input
mov edx,1
int 80h

mov al,[input]
cmp al,[esi]
jne notequal
inc esi
dec byte[count]
jnz loop1

equal:

mov eax,4
mov ebx,1
mov ecx,m2
mov edx,l2
int 80h

notequal:

mov eax,4
mov ebx,1
mov ecx,m3
mov edx,l3
int 80h

exit:
mov eax,1
mov ebx,0
int 80h


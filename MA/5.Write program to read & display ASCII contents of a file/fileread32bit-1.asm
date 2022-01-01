;GROUP B ASSIGNMENT

;Write a Program to READ and DISPLAY CONTENTS OF FILE

;This is 32 bit code

;I have already created 'MAL_LAB.txt' file and written some text in it.

;0777 is the PERMISSION MODE for this refer the document CHANING FILE PERMISSIONS. I have attached this document with mail.
;Also refer the ebook ASSEMBLY LANGUAGE TUTORIAL---- CHAPTER 20 ----Assembly File Management.
;I have attached this book also with this mail.


%macro DISPLAY 2
		mov eax,4
		mov ebx,1
		mov ecx,%1
		mov edx,%2
		int 80h

%endmacro

section .data
	file_name db 'MAL_LAB.txt',0		;'MAL_LAB.txt' is already created and contents are already present in it

	msg db 'FILE CONTENTS ARE:-',0xA,0xD
	len equ $-msg	
	
	msg1 db 'FILE READ SUCESSFULLY!',0xA,0xD
	len1 equ $-msg1

section .bss
	
	fd_in resb 1		;file decriptor
	info resb 2000		;buffer 


section .text
	global _start
	_start:

				
	;open the file for reading
		mov eax,5		;system call number (sys_open)
		mov ebx,file_name	;file name
		mov ecx,0		; file access mode
		mov edx,0777		;read,write and execute by all
		int 80h			;call kernel

		mov [fd_in],eax		; file descriptor
	
	;read from file
		mov eax,3		;system call number (sys_read)
		mov ebx,[fd_in]		;file descriptor 
		mov ecx,info		;pointer to the input buffer
		mov edx,2000		;buffer size i.e the number of bytes to read
		int 80h			;call kernel
	
	;close the file
		mov eax,6		;system call number (sys_close)
		mov ebx,[fd_in]		;file decriptor

		DISPLAY msg,len

	;print the info
		mov eax,4
		mov ebx,1
		mov ecx,info
		mov edx,2000
		int 80h

		DISPLAY msg1,len1

	;exit
		mov eax,1	;system call number (sys_exit)
		int 80h		;call kernel

;------------------------------------OUTPUT---------------------------------------------
;[root@localhost MA]# nasm -f elf64 fileread32bit.asm -o fileread32bit.o
;[root@localhost MA]# ld -o fileread32bit fileread32bit.o
;[root@localhost MA]# ./fileread32bit
;FILE CONTENTS ARE:-






;VISHWAKARMA INSTITUTE OF INFORMATION TECHNOLOGY

;DEPARTMENT OF COMPUTER ENGINEERING


;FILE READ SUCESSFULLY!

;[root@localhost MA]# 





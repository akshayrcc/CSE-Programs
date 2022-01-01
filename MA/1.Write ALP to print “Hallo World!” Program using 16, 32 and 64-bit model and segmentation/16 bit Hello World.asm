;%TITLE "First Program -- HELLO.ASM" 
         
        .MODEL   small 
        .STACK   256 
        .DATA 
msg     DB      "Hello, World!$" 
        .CODE 
MAIN    PROC 
        mov     ax,@data     ;Initialize DS to address 
        mov     ds,ax        ; of data segment 
        lea     dx,msg       ;get message 
        mov     ah,09h       ;display string function 
        int     21h          ;display message 
Exit:   mov     ah,4Ch       ;DOS function: Exit program 
        mov     al,0         ;Return exit code value 
        int     21h          ;Call DOS. Terminate program 
MAIN    ENDP                 ;End of program 
        END     MAIN         ; entry point
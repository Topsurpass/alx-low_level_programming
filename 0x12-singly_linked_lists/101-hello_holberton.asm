section .data
    hello db 'Hello, Holberton',0

section .text
    global _start

_start:
    ; call printf function
    mov edx, 13        ; message length
    mov ecx, hello     ; message to write
    mov ebx, 1         ; file descriptor (stdout)
    mov eax, 4         ; system call for sys_write
    int 0x80           ; call kernel

    ; print new line
    mov edx, 1         ; message length
    mov ecx, newLine   ; message to write
    mov ebx, 1         ; file descriptor (stdout)
    mov eax, 4         ; system call for sys_write
    int 0x80           ; call kernel

    ; exit program
    mov eax, 1         ; system call for sys_exit
    xor ebx, ebx       ; exit status = 0
    int 0x80           ; call kernel


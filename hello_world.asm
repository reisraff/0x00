section .text
    global _start

_start:
    mov eax, 4
    mov ebx, 1
    mov ecx, hl
    mov edx, hll
    int 0x80
    mov eax, 1
    int 0x80

section .data
    hl db 'Hello World', 0xa
    hll equ $ - hl
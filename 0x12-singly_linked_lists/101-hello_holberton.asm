global main
extern printf

section .data
    format db 'Hello, Holberton', 10, 0  ; The format string with newline and null terminator

section .text
main:
    mov edi, format
    xor eax, eax
    call printf
    mov eax, 0
    ret

section .data
    hello db "Hello, Holberton", 10, 0 ; Define the format string, including a newline character

section .text
    global main
    extern printf

main:
    sub     rsp, 8             ; Align the stack for printf
    mov     rdi, hello         ; Load the address of the format string into rdi
    call    printf             ; Call the printf function
    add     rsp, 8             ; Restore the stack
    ret

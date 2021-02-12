;nasm -f macho64 -o *.o *.s && ld -o * -e _main *.o -lSystem -macosx_version_min 10.8

global      _main

section     .data
msg    db   "Hello World!",10

section     .text
_main:
    mov rax, 0x2000004
    mov rsi, msg
    mov rdi, 1
    mov rdx, 13
    syscall
    mov rax, 0x2000001
    xor rdi, rdi
    syscall
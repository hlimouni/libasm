;nasm -f macho64 -o *.o *.s && ld -o * -e _main *.o -lSystem -macosx_version_min 10.8
;First Argument: RDI
;Second Argument: RSI
;Third Argument: RDX
;Fourth Argument: RCX
;Fifth Argument: R8
;Sixth Argument: R9

global      _main

section     .data
msg    db   "Hello World!",10

section     .text
_main:
    mov rax, 0x2000004
    mov rdi, 1
    mov rsi, msg
    mov rdx, 13
    syscall
    mov rax, 0x2000001
    xor rdi, rdi
    syscall

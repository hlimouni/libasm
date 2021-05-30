;nasm -f macho64 -o *.o *.s && ld -o * -e _main *.o -lSystem -macosx_version_min 10.8
;First Argument: RDI
;Second Argument: RSI
;Third Argument: RDX
;Fourth Argument: RCX
;Fifth Argument: R8
;Sixth Argument: R9

global      _ft_write

section     .text
extern      ___error



_ft_write:
    mov rax, 0x2000004
    syscall
    jc errno_set
    ret
errno_set:
    push rax
    call ___error
    pop r8
    mov [rax] , r8
    mov rax, -1

    ret
;nasm -f macho64 -o *.o *.s && ld -o * -e _main *.o -lSystem -macosx_version_min 10.8
;First Argument: RDI
;Second Argument: RSI
;Third Argument: RDX
;Fourth Argument: RCX
;Fifth Argument: R8
;Sixth Argument: R9

global      _ft_read

section     .text
extern      ___error



_ft_read:
    mov rax, 0x2000003
    syscall
    jc errno_set
    ret
errno_set:
    push rax
    call ___error
    pop rbx
    mov [rax] , rbx
    mov rax, -1
    ret

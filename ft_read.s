;read syscall number in macos is 0x2000003

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

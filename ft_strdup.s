;nasm -f macho64 -o *.o *.s && ld -o * -e _main *.o -lSystem -macosx_version_min 10.8
;First Argument: RDI
;Second Argument: RSI
;Third Argument: RDX
;Fourth Argument: RCX
;Fifth Argument: R8
;Sixth Argument: R9

global		_ft_strdup

section		.text
extern      _malloc
extern      _ft_strcpy
extern      _ft_strlen

_ft_strdup:
    call _ft_strlen
    inc rax
    push rdi
	mov rdi, rax
    call _malloc
	cmp rax, 0
	je return
    pop rdi
    mov rsi, rdi
    mov rdi, rax
    call _ft_strcpy
return:
    ret

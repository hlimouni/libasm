;nasm -f macho64 -o *.o *.s && ld -o * -e _main *.o -lSystem -macosx_version_min 10.8
;First Argument: RDI
;Second Argument: RSI
;Third Argument: RDX
;Fourth Argument: RCX
;Fifth Argument: R8
;Sixth Argument: R9

global		_ft_strcpy

section		.text

_ft_strcpy:
	mov rax, rsi
	mov rbx, rdi
chars_loop:
	cmp byte [rax], 0
	je zero_terminate
	mov byte PTR [rbx], byte [rax]
	inc rax
	inc rbx
	jmp chars_loop
zero_terminate:
	mov byte PTR [rbx], 0
	mov rax, rdi
	ret

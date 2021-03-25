global		_ft_strlen


section		.text

_ft_strlen:
	mov rax, rdi
chars_loop:
	cmp byte [rax], 0
	je calc_lenght
	inc rax
	jmp chars_loop
calc_lenght:
	sub rax, rdi
	ret

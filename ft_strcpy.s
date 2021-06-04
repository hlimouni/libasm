
global		_ft_strcpy

section		.text

_ft_strcpy:

	push rdi
chars_loop:
	cmp byte [rsi], 0
	je zero_terminate
	mov cl, [rsi]
	mov [rdi], cl
	inc rsi
	inc rdi
	jmp chars_loop
zero_terminate:
	mov byte [rdi], 0
return:
	pop rdi
	mov rax, rdi
	ret
; _ft_strcpy:
; 	mov rax, rsi
; 	mov rbx, rdi
; chars_loop:
; 	cmp byte [rax], 0
; 	je zero_terminate
; 	mov cl, [rax]
; 	mov [rbx], cl
; 	inc rax
; 	inc rbx
; 	jmp chars_loop
; zero_terminate:
; 	mov byte [rbx], 0
; 	mov rax, rdi
; 	ret

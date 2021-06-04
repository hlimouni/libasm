
global		_ft_strcmp

section		.text

_ft_strcmp:

chars_loop:
	cmp byte [rdi], 0
	je calc_diff
	cmp byte [rsi], 0
	je calc_diff
    mov cl, [rsi]
	cmp [rdi], cl
	jne calc_diff
	inc rsi
	inc rdi
	jmp chars_loop

calc_diff:
    movzx rax, byte [rdi]
    movzx rbx, byte [rsi]
	sub rax , rbx

	ret
; _ft_strcmp:
; 	mov rax, rdi
; 	mov rbx, rsi
; chars_loop:
; 	cmp byte [rax], 0
; 	je calc_diff
; 	cmp byte [rbx], 0
; 	je calc_diff
;     mov cl, [rbx]
; 	cmp byte [rax], cl
; 	jne calc_diff
; 	inc rax
; 	inc rbx
; 	jmp chars_loop
; calc_diff:
;     movzx r8d, byte [rbx]
;     movzx ecx, byte [rax]
; 	sub ecx , r8d
; 	xor rax, rax
;     mov eax, ecx
; 	ret

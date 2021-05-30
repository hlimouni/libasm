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

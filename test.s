global		_test

section		.text
extern  _malloc
extern _ft_strcpy

_test:
    ; push r8
    call   _ft_strcpy
    mov rdi, 10
    ; call _malloc
    ; pop r8
    ret




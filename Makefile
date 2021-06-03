NASM=nasm
AR=ar
CC=gcc -Wall -Wextra -Werror
ARFLAGS=rcs
SFLAGS=-f macho64 
NAME=libasm.a

SRC=ft_strlen.s \
    ft_strcpy.s \
	ft_strcmp.s \
	ft_write.s \
	ft_read.s \
	ft_strdup.s

OBJ=$(SRC:.s=.o)

.PHONY: clean fclean test re

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

%.o: %.s
	$(NASM) -o $@ $< $(SFLAGS)

clean:
	rm -f $(OBJ)
	rm -f file

fclean: clean
	rm -f $(NAME)

test: all
	$(CC) $(NAME) main.c -o test

re: fclean all

NASM=nasm
AR=ar
ARFLAGS=rcs
SFLAGS=-f macho64 
NAME=libasm.a

SRC=ft_strlen.s \

OBJ=$(SRC:.s=.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

%.o: %.s
	$(NASM) -o $@ $< $(SFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

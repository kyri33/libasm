NAME = libfts.a

NASM = $(HOME)/.brew/bin/nasm

GCC = gcc

FLAGS = -f macho64

CFALGS = -Wall -Werror -Wextra

SRC = main.c

SRCO = main.o

ASMSRC = ft_bzero.s ft_strlen.s ft_strcat.s ft_isalpha.s ft_isdigit.s 			\
 			ft_isalnum.s ft_isascii.s ft_isprint.s ft_toupper.s ft_tolower.s	\
			 ft_puts.s ft_memset.s ft_memcpy.s ft_strdup.s ft_cat.s

ASMO = $(ASMSRC:.s=.o)

all: $(NAME)

$(NAME): $(ASMO) $(SRC) $(ASMSRC)
	$(GCC) $(CFLAGS) -c $(SRC)
	ar rcs $(NAME) $(ASMO)
	$(GCC) -o lib_asm $(NAME) $(SRCO) -I libasm.h
%.o: %.s
	$(NASM) $(FLAGS) $<

clean:
	rm -f $(ASMO) $(SRCO)

fclean: clean
	rm -f $(NAME) lib_asm

re: fclean all

##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## my_printf
##

SRC	=	my_printf.c	\
		lib/my/situ_spe.c	\
		lib/my/situ_gene.c	\
		lib/my/my_putchar.c	\
		lib/my/my_putstr.c	\
		lib/my/my_strlen.c	\
		lib/my/my_put_nbr.c	\
		lib/my/my_put_usnbr.c	\
		lib/my/my_pow.c		\
		lib/my/get_float.c	\
		lib/my/get_octal.c	\
		lib/my/get_binary.c	\
		lib/my/situx.c	\
		lib/my/situ_x_mas.c	\
		lib/my/res_dif_int.c	\
		lib/my/get_hex.c

NAME	=	my_printf

NAME2	=	libmy.a

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):$(OBJ)
	ar rc $(NAME2) $(OBJ)

test:$(OBJ)
	ar rc $(NAME2) $(OBJ)
	gcc -o unit_test my_printf.c unit_test.c -L. -lmy -lcriterion

clean:
	rm -f *.o
	rm -f lib/my/*.o

re: 	fclean all

fclean: clean
	rm -f $(NAME)
	rm -f $(NAME2)

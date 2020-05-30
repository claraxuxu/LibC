##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## my_printf
##

SRC	=	my_printf.c	\
		lib/situ_spe.c	\
		lib/situ_gene.c	\
		lib/my_putchar.c	\
		lib/my_putstr.c	\
		lib/my_strlen.c	\
		lib/my_put_nbr.c	\
		lib/my_put_usnbr.c	\
		lib/my_pow.c		\
		lib/get_float.c	\
		lib/get_octal.c	\
		lib/get_binary.c	\
		lib/situx.c	\
		lib/situ_x_mas.c	\
		lib/res_dif_int.c	\
		lib/get_hex.c

NAME	=	my_printf

OBJ	=	$(wildcard *.o)

all:	$(NAME)

$(NAME):
	gcc -c -g3 $(SRC) -Iinclude 
	gcc -g3 -o $(NAME) *.o
	mkdir directory
	mv *.o directory/

# test:$(OBJ)
# 	ar rc $(NAME2) $(OBJ)
# 	gcc -o unit_test my_printf.c unit_test.c -L. -lmy -lcriterion

clean:
	rm -rf directory/
	rm -f *.o
	rm -f src/*.o

re: 	fclean all

fclean: clean
	rm -f $(NAME)


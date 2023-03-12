##
## EPITECH PROJECT, 2022
## Untitled (Workspace)
## File description:
## Makefile
##

NAME		=	mysh
LIBRARY_DIR =	lib
HEADER_DIR	=	include
OBJECT_DIR	=	objects
NAMELIB		=	libmy.a


SRC_LIB		=	lib/my/my_putchar.c \
				lib/my/my_putnbr.c \
				lib/my/my_putstr.c \
				lib/my/my_strlen.c \
				lib/my/hexa_convertor.c \
				lib/my/convertor_binaire.c \
				lib/my/convert_octal.c \
				lib/my/my_putnbr_long.c \
				lib/my/my_non_printable_str.c \
				lib/my/my_find.c \
				lib/my/hexa_convertor_up.c \
				lib/my/my_putnbr_long_unsigned.c \
				lib/my/cond1.c \
				lib/my/cond2.c \
				lib/my/cond3.c \
				lib/my/cond4.c \
				lib/my/my_abs.c \
				lib/my/my_printf.c \
				lib/my/my_putfloat.c \
				lib/my/my_getnbr.c \
				lib/my/str_compare.c \
				lib/my/my_strstr.c \
				lib/my/my_strcpy.c \
				lib/my/my_strcat.c \
				lib/my/str_to_word_array_esp.c

SRC		=		minishell.c	\
				str_to_word_array.c \
				play_all_order.c \
				create_path.c \
				cond_for_tab_path.c \
				cd.c \
				fault_message.c \
				create_pwd_path.c

CFLAGS	=	-I$(HEADER_DIR) -Wall -Wextra -g3

LFLAGS	=	-L ./ -lmy

OBJ	=	$(SRC:.c=.o)
OBJ_LIB	=	$(SRC_LIB:.c=.o)


all: $(NAME)

$(NAME):	$(OBJ_LIB) $(OBJ)
			ar rc $(NAMELIB) $(OBJ_LIB)
			gcc -o $@ $(CFLAGS) $(OBJ) $(LFLAGS)


clean:
	rm -f $(OBJ)
	rm -f $(OBJ_LIB)

fclean: clean
	rm -f $(NAME)
	rm -f $(NAMELIB)

re: fclean all

.PHONY: all clean fclean re

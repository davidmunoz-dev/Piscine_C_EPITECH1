##
## Makefile for makefile in /home/munoz_d/rendu/Piscine_C_J10/lib/my
## 
## Made by munoz david
## Login   <munoz_d@epitech.net>
## 
## Started on  Mon Oct 12 10:18:52 2015 munoz david
## Last update Tue Oct 20 22:56:34 2015 munoz david
##

SRC=	my_putstr.c \
	my_strcpy.c \
	my_strncat.c \
	my_revstr.c \
	my_str_isalpha.c \
	my_strncmp.c \
	my_find_prime_sup.c \
	my_showmem.c \
	my_str_islower.c \
	my_strncpy.c \
	my_getnbr.c \
	my_showstr.c \
	my_str_isnum.c \
	my_strstr.c \
	my_isneg.c \
	my_sort_int_tab.c \
	my_str_isprintable.c \
	my_strupcase.c \
	my_is_prime.c \
	my_square_root.c \
	my_str_isupper.c \
	my_swap.c \
	my_power_rec.c \
	my_strcapitalize.c \
	my_strlcat.c \
	my_putchar.c \
	my_strcat.c \
	my_strlen.c \
	my_put_nbr.c \
	my_strcmp.c \
	my_strlowcase.c

OBJ=	$(SRC:.c=.o)

NAME=	libmy.a

all:	$(NAME)

$(NAME): $(OBJ)
	cc -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	cp $(NAME) ../
	cp my.h ../../include

clean:
	rm $(OBJ)

fclean: 	clean
	rm $(NAME)

re: fclean all

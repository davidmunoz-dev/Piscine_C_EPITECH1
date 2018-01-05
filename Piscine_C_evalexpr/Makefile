
## Makefile for compile in /home/munoz_d/rendu/Piscine_C_infinadd
## 
## Made by munoz david
## Login   <munoz_d@epitech.net>
## 
## Started on  Tue Oct 20 22:58:53 2015 munoz david
## Last update Thu Oct 22 21:44:43 2015 munoz david
##

SRC     = eval_expr.c

OBJ     = $(SRC:.c=.o)

NAME    = eval_expr

LDFLAGS = -L./lib/my/ -lmy -lncurses

CFLAGS  = -I./include/ -g

RM      = rm -f

CC      = gcc

DIR     = lib/my

$(NAME): $(OBJ)
	@(cd $(DIR) && $(MAKE))
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS) $(CFLAGS)

all: $(NAME)

clean:
	$(RM) $(OBJ)
	cd $(DIR) && ($(MAKE) clean)

fclean:
	$(RM) $(OBJ)
	$(RM) $(NAME)
	cd $(DIR) && ($(MAKE) clean)

re: lib fclean all

.PHONY: all clean fclean re lib

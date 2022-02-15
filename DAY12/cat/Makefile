##
## EPITECH PROJECT, 2021
## Makefile do_op
## File description:
## makefile
##

SRC = 	cat.c

OBJ = $(SRC:.c=.o)

LIB = -L./../lib/my -lmy

CFLAGS = -I./../include

NAME = cat

all: $(NAME)

$(NAME): $(OBJ)
	make -C ../lib/my
	gcc $(CFLAGS) $(OBJ) $(LIB) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
	make clean

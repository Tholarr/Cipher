##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC =	main.c					\
		encrypt.c				\
		encrypt_msg_matrix.c	\
		encrypt_product.c

NAME =	103cipher

CFLAGS = -Wall -Wshadow -Wextra

all:	$(NAME)

debug: CFLAGS += -g
debug: $(NAME)

$(NAME):
		gcc -o $(NAME) $(SRC) $(LDFLAGS)
		rm -f $(OBJ)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re:		fclean all

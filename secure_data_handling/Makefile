CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
NAME = secure_data
SRC = main.c store.c session.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
# Nom de l'exécutable final
NAME = secure_data

# Compilateur et options (Flags de sécurité)
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

# Liste des fichiers sources et objets
SRC = main.c store.c session.c
OBJ = $(SRC:.c=.o)

# Règle par défaut : compile tout
all: $(NAME)

# Création de l'exécutable
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

# Nettoyage des fichiers objets (.o)
clean:
	rm -f $(OBJ)

# Nettoyage complet (objets + exécutable)
fclean: clean
	rm -f $(NAME)

# Recommence tout à zéro
re: fclean all
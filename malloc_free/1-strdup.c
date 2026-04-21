#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplique une chaîne de caractères en mémoire.
 * @str: La chaîne à copier.
 *
 * Return: Un pointeur vers la nouvelle chaîne, ou NULL en cas d'échec.
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len = 0;

	/* 1. Si la chaîne d'entrée est NULL, on s'arrête */
	if (str == NULL)
		return (NULL);

	/* 2. On calcule la longueur de la chaîne (sans le \0) */
	while (str[len] != '\0')
		len++;

	/* 3. On alloue la mémoire : len + 1 (pour le caractère nul '\0') */
	dup = malloc(sizeof(char) * (len + 1));

	/* 4. On vérifie si malloc a échoué */
	if (dup == NULL)
		return (NULL);

	/* 5. On recopie les caractères un par un */
	for (i = 0; i <= len; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}

#include "main.h"
#include <stdlib.h>

/**
 * create_array - Crée un tableau de caractères et l'initialise.
 * @size: La taille du tableau à créer.
 * @c: Le caractère avec lequel remplir le tableau.
 *
 * Return: Un pointeur vers le tableau, ou NULL si size = 0 ou en cas d'échec.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	/* 1. Cas particulier demandé par l'énoncé */
	if (size == 0)
		return (NULL);

	/* 2. Demander de la mémoire à l'ordinateur (malloc) */
	/* On demande 'size' fois la taille d'un caractère (1 octet) */
	array = malloc(sizeof(char) * size);

	/* 3. Vérifier si l'allocation a réussi */
	if (array == NULL)
		return (NULL);

	/* 4. Remplir le tableau avec le caractère c */
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	/* 5. Retourner l'adresse du début du tableau */
	return (array);
}

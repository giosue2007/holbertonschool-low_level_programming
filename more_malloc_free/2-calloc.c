#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Alloue de la mémoire pour un tableau et met tout à zéro.
 * @nmemb: Nombre d'éléments.
 * @size: Taille de chaque élément.
 *
 * Return: Pointeur vers la mémoire, ou NULL si échec.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int total_size, i;

	/* 1. Vérification des entrées */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* 2. Calcul de la place totale nécessaire */
	total_size = nmemb * size;

	/* 3. Réservation de la place avec malloc */
	p = malloc(total_size);

	/* 4. Si malloc a échoué, on s'arrête */
	if (p == NULL)
		return (NULL);

	/* 5. On remplit chaque case avec des zéros */
	for (i = 0; i < total_size; i++)
		p[i] = 0;

	return (p);
}

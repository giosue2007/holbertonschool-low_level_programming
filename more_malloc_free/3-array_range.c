#include "main.h"
#include <stdlib.h>

/**
 * array_range - Crée un tableau d'entiers de min à max.
 * @min: Valeur de départ.
 * @max: Valeur de fin.
 *
 * Return: Pointeur vers le tableau, ou NULL si échec.
 */
int *array_range(int min, int max)
{
	int *array;
	int i, size;

	/* Vérification de la validité de l'intervalle */
	if (min > max)
		return (NULL);

	/* Calcul du nombre d'éléments (le +1 est crucial) */
	size = max - min + 1;

	/* Allocation de la mémoire pour des entiers (int) */
	array = malloc(sizeof(int) * size);

	/* Vérification du succès de malloc */
	if (array == NULL)
		return (NULL);

	/* Remplissage du tableau dans l'ordre croissant */
	for (i = 0; i < size; i++)
	{
		array[i] = min;
		min++;
	}

	return (array);
}

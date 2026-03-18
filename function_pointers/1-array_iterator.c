#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Exécute une fonction sur chaque élément d'un tableau.
 * @array: Le tableau d'entiers.
 * @size: La taille du tableau.
 * @action: Pointeur vers la fonction à utiliser.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

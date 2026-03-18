#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Cherche un entier dans un tableau.
 * @array: Le tableau d'entiers.
 * @size: Taille du tableau.
 * @cmp: Pointeur vers la fonction de comparaison.
 *
 * Return: Index du premier élément trouvé, ou -1 sinon.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}

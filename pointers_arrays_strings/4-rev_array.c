#include "main.h"

/**
 * reverse_array - inverse le contenu d'un tableau d'entiers.
 * @a: pointeur vers le premier élément du tableau.
 * @n: nombre d'éléments dans le tableau.
 *
 * Return: rien.
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	/* On parcourt seulement jusqu'à la moitié du tableau */
	for (i = 0; i < n / 2; i++)
	{
		/* Échange entre l'élément à l'indice i et l'élément symétrique à la fin */
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}

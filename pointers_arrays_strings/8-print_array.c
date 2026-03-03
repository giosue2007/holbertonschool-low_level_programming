#include "main.h"
#include <stdio.h>

/**
 * print_array - affiche n elements d'un tableau d'entiers
 * @a: le pointeur vers le debut du tableau
 * @n: le nombre d'elements a afficher
 */
void print_array(int *a, int n)
{
	int i;

	/* On boucle de 0 jusqu'a n-1 */
	for (i = 0; i < n; i++)
	{
		/* On affiche le nombre actuel */
		printf("%d", a[i]);

		/* Le secret : on n'affiche la virgule que si ce n'est PAS le dernier */
		if (i < n - 1)
		{
			printf(", ");
		}
	}

	/* On finit toujours par un saut de ligne */
	printf("\n");
}

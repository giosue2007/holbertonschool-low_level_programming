#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Affiche la somme des deux diagonales
 * d'une matrice carrée d'entiers.
 * @a: Pointeur vers le premier élément de la matrice.
 * @size: Taille d'un côté de la matrice.
 */
void print_diagsums(int *a, int size)
{
	int i;
	long int sum1 = 0;
	long int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		/* Diagonale principale (0, 4, 8... pour une matrice 3x3) */
		sum1 += a[i * (size + 1)];

		/* Diagonale secondaire (2, 4, 6... pour une matrice 3x3) */
		sum2 += a[(i + 1) * (size - 1)];
	}

	printf("%ld, %ld\n", sum1, sum2);
}

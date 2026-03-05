#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Affiche la somme des deux diagonales d'une matrice carrée.
 * @a: Pointeur vers le premier élément de la matrice (vu comme un tableau 1D).
 * @size: La taille d'un côté de la matrice (ex: 3 pour une matrice 3x3).
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		/* Diagonale principale : index (ligne * size) + ligne */
		/* Ce qui revient à i * (size + 1) */
		sum1 += a[i * (size + 1)];

		/* Diagonale secondaire : index (ligne * size) + (size - 1 - ligne) */
		/* Ce qui revient à (i + 1) * (size - 1) */
		sum2 += a[(i + 1) * (size - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}

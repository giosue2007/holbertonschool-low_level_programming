#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Crée une grille de 2 dimensions d'entiers.
 * @width: Largeur de la grille (colonnes).
 * @height: Hauteur de la grille (lignes).
 *
 * Return: Pointeur vers la grille, ou NULL en cas d'échec ou taille <= 0.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/* 1. Vérification des dimensions */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* 2. Allocation du tableau de pointeurs (les lignes) */
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	/* 3. Allocation de chaque ligne (les colonnes) */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		/* 4. Si une allocation échoue, on doit tout libérer ! */
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}

	/* 5. Initialisation de chaque case à 0 */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}

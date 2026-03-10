#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Libère la mémoire d'une grille à 2 dimensions.
 * @grid: L'adresse de la grille (tableau de pointeurs).
 * @height: La hauteur de la grille (nombre de lignes).
 *
 * Description: Libère chaque ligne individuellement, 
 * puis libère le tableau de pointeurs principal.
 */
void free_grid(int **grid, int height)
{
	int i;

	/* 1. On vérifie si la grille existe pour éviter de segfault */
	if (grid == NULL || height <= 0)
		return;

	/* 2. On libère chaque ligne une par une */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	/* 3. On libère enfin le tableau qui contenait les adresses des lignes */
	free(grid);
}

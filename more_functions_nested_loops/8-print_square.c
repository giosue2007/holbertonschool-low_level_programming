#include "main.h"

/**
 * print_square - Imprime un carré suivi d'une nouvelle ligne.
 * @size: La taille du carré.
 */
void print_square(int size)
{
	int h, w; /* h pour hauteur, w pour largeur */

	if (size > 0)
	{
		for (h = 0; h < size; h++) /* Boucle pour les lignes */
		{
			for (w = 0; w < size; w++) /* Boucle pour les colonnes */
			{
				_putchar('#');
			}
			_putchar('\n'); /* On change de ligne après chaque rangée de # */
		}
	}
	else
	{
		_putchar('\n'); /* Si la taille est 0 ou moins, juste un saut de ligne */
	}
}

#include "main.h"

/**
 * print_line - Dessine une ligne droite dans le terminal.
 * @n: Le nombre de fois que le caractère '_' doit être imprimé.
 */
void print_line(int n)
{
	int i;

	/* 1. Si n est supérieur à 0, on lance la boucle pour dessiner */
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}

	/* 2. Dans TOUS les cas (n > 0 ou n <= 0), on finit par un saut de ligne */
	_putchar('\n');
}

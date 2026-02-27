#include "main.h"

/**
 * print_diagonal - Dessine une ligne diagonale dans le terminal.
 * @n: Le nombre de fois que le caractère \ doit être imprimé.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' '); /* On imprime les espaces */
			}
			_putchar('\\'); /* On imprime la barre oblique */
			_putchar('\n'); /* On passe à la ligne suivante */
		}
	}
	else
	{
		_putchar('\n'); /* Si n <= 0, juste une nouvelle ligne */
	}
}

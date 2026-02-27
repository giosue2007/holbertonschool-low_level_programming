#include "main.h"

/**
 * more_numbers - affiche 10 fois les nombres de 0 à 14.
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++) /* Boucle pour répéter 10 fois */
	{
		for (j = 0; j <= 14; j++) /* Boucle pour compter de 0 à 14 */
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0'); /* Premier usage : affiche le '1' des dizaines */
			}
			_putchar((j % 10) + '0'); /* Deuxième usage : affiche les unités */
		}
		_putchar('\n'); /* Troisième usage : le saut de ligne */
	}
}

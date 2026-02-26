#include "main.h"

/**
 * jack_bauer - Affiche chaque minute de la journée
 *
 * Description: De 00:00 à 23:59
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			/* Affichage des dizaines de l'heure */
			_putchar((h / 10) + '0');
			/* Affichage des unités de l'heure */
			_putchar((h % 10) + '0');
			
			_putchar(':');
			
			/* Affichage des dizaines de la minute */
			_putchar((m / 10) + '0');
			/* Affichage des unités de la minute */
			_putchar((m % 10) + '0');
			
			_putchar('\n');
		}
	}
}

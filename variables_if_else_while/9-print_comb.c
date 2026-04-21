#include <stdio.h>

/**
 * main - Point d'entrée
 *
 * Description: Affiche 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
 * en respectant des contraintes strictes.
 *
 * Return: Toujours 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0'); /* Affiche le chiffre (Utilisation 1) */

		if (n < 9)
		{
			putchar(','); /* Virgule (Utilisation 2) */
			putchar(' '); /* Espace (Utilisation 3) */
		}
	}

	putchar('\n'); /* Nouvelle ligne (Utilisation 4) */

	return (0);
}

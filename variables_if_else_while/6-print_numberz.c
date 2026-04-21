#include <stdio.h>

/**
 * main - Point d'entree
 *
 * Description: Affiche 0123456789 en utilisant putchar et int
 * Return: Toujours 0
 */
int main(void)
{
	int n;

	/* On commence a 48 (qui est '0') et on finit a 57 (qui est '9') */
	for (n = 48; n <= 57; n++)
	{
		putchar(n); /* Utilisation 1 */
	}

	putchar('\n'); /* Utilisation 2 */

	return (0);
}

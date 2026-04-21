#include <stdio.h>

/**
* main - Point d'entrée
*
* Description: Affiche les chiffres de la base 16 (0-9 et a-f)
* en utilisant seulement 3 putchar.
*
* Return: Toujours 0
 */
int main(void)
{
		 char c;
				/* 1. Boucle pour les chiffre de '0' a '9' */
		for (c = '0'; c <= '9'; c++)
	{
			putchar(c); /* Premier putchar */
	}

		/* 2. Boucle pour les lettre de "a" à 'f' */
		for (c = 'a'; c <= 'f'; c++)

		{
			putchar(c); /* Deuxime putchar*/
		}

		putchar('\n'); /* troisième putchar */


		return (0);
}

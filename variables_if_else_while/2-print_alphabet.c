#include <stdio.h>

/**
 * main - Point d'entree
 *
 * Description: Imprime l'alphabet en minuscules
 * Return: Toujours 0
 */
int main(void)
{
	char lettre;

	/* On commence a 'a', on avance d'une lettre, on s'arrete apres 'z' */
	for (lettre = 'a'; lettre <= 'z'; lettre++)
	{
		putchar(lettre); /* Premier putchar : pour les lettres */
	}

	putchar('\n'); /* Deuxieme putchar : pour la nouvelle ligne */

	return (0);
}

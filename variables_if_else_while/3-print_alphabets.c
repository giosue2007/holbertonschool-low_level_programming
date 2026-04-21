#include <stdio.h>

/**
 * main - Point d'entree
 *
 * Description: Affiche l'alphabet en minuscules puis en majuscules
 * Return: Toujours 0 (Succes)
 */
int main(void)
{
	char lettre;

	/* Boucle pour les minuscules */
	for (lettre = 'a'; lettre <= 'z'; lettre++)
	{
		putchar(lettre); /* Utilisation 1 */
	}

	/* Boucle pour les majuscules */
	for (lettre = 'A'; lettre <= 'Z'; lettre++)
	{
		putchar(lettre); /* Utilisation 2 */
	}

	putchar('\n'); /* Utilisation 3 */

	return (0);
}

#include <stdio.h>

/**
 * main - Point d'entrée du programme
 *
 * Description: Affiche l'alphabet en minuscules à l'envers
 * en n'utilisant que deux fois la fonction putchar.
 *
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
	char lettre;

	for (lettre = 'z'; lettre >= 'a'; lettre--)
	{
		putchar(lettre);
	}
	putchar('\n');

	return (0);
}

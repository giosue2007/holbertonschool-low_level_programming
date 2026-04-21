#include "main.h"

/**
 * print_alphabet_x10 - imprime 10 fois l'alphabet en minuscules
 *
 * Description: Utilise deux boucles imbriquées pour répéter
 * l'affichage de l'alphabet 10 fois.
 * Return: void
 */
void print_alphabet_x10(void)
{
	char lettre;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (lettre = 'a'; lettre <= 'z'; lettre++)
		{
			_putchar(lettre); /* Utilisation n°1 */
		}
		_putchar('\n'); /* Utilisation n°2 */
	}
}

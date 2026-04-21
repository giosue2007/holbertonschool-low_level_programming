#include "main.h"

/**
 * print_alphabet - imprime l'alphabet en minuscules
 *
 * Description: Utilise une boucle pour parcourir les caractères
 * de 'a' jusqu'à 'z' et les affiche un par un.
 * Return: void (rien)
 */
void print_alphabet(void)
{
	char lettre;

	for (lettre = 'a'; lettre <= 'z'; lettre++)
	{
		_putchar(lettre);
	}
	_putchar('\n');
}

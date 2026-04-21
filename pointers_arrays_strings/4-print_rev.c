#include "main.h"

/**
 * print_rev - affiche une chaîne à l'envers
 * @s: la chaîne à inverser
 */
void print_rev(char *s)
{
	int i = 0;

	/* Étape 1 : On cherche la fin de la chaîne */
	while (s[i] != '\0')
	{
		i++;
	}

	/* Étape 2 : On repart de la fin vers le début */
	/* On fait i - 1 car s[i] est le '\0' (invisible) */
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

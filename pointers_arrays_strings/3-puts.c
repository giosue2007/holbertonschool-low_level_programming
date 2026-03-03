#include "main.h"

/**
 * _puts - affiche une chaîne de caractères suivie d'un saut de ligne
 * @str: le pointeur vers la chaîne à afficher
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * puts_half - affiche la seconde moitie d'une chaine
 * @str: la chaine a traiter
 */
void puts_half(char *str)
{
	int i, n, len;

	/* 1. On compte la longueur totale de la chaine */
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	/* 2. On calcule le point de depart (le milieu) */
	/* Si c'est pair : len / 2 */
	/* Si c'est impair : (len + 1) / 2 */
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1) / 2;
	}

	/* 3. On affiche a partir de ce point jusqu'a la fin */
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * puts2 - affiche un caractere sur deux d'une chaine
 * @str: la chaine a parcourir
 */
void puts2(char *str)
{
	int i;

	i = 0;
	/* On vérifie que la chaîne n'est pas vide et qu'on n'est pas au bout */
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		/* Si on est sur le dernier caractère, on s'arrête */
		if (str[i + 1] == '\0')
		{
			break;
		}
		/* Sinon on saute le suivant pour aller deux cases plus loin */
		i = i + 2;
	}
	_putchar('\n');
}

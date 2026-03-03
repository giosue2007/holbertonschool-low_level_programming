#include "main.h"

/**
 * puts2 - affiche un caractere sur deux d'une chaine
 * @str: la chaine a parcourir
 */
void puts2(char *str)
{
	int i;

	i = 0;
	/* On parcourt la chaine jusqu'au caractere nul \0 */
	while (str[i] != '\0')
	{
		/* On affiche le caractere actuel */
		_putchar(str[i]);

		/* Le secret : on saute le suivant si on n'est pas a la fin */
		if (str[i + 1] == '\0')
		{
			break;
		}
		
		/* On avance de 2 cases au lieu d'une seule */
		i = i + 2;
	}
	_putchar('\n');
}

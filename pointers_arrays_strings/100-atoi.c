#include "main.h"

/**
 * _atoi - convertir une chaine en entier
 * @s: la chaine a convertir
 *
 * Return: l'entier converti, ou 0 si aucun chiffre n'est trouve
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int res = 0;
	int found = 0;

	while (s[i] != '\0')
	{
		/* On gere les signes : chaque '-' inverse le signe */
		if (s[i] == '-')
		{
			sign *= -1;
		}

		/* Si on trouve un chiffre (ASCII 48-57) */
		if (s[i] >= '0' && s[i] <= '9')
		{
			found = 1;
			/* Decalage des dizaines et ajout du chiffre */
			res = (res * 10) + (s[i] - '0');
		}
		/* Si on a trouve des chiffres et qu'on voit autre chose */
		else if (found == 1)
		{
			/* On s'arrete net ! */
			break;
		}
		i++;
	}

	return (res * sign);
}

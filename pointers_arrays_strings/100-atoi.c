#include "main.h"

/**
 * _atoi - convertit une chaine en entier
 * @s: la chaine a convertir
 *
 * Return: l'entier converti
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int res = 0;
	int found = 0;

	/* 1. On parcourt la chaine */
	while (s[i] != '\0')
	{
		/* 2. On gere les signes */
		if (s[i] == '-')
		{
			sign *= -1;
		}
		
		/* 3. Si on trouve un chiffre */
		if (s[i] >= '0' && s[i] <= '1' && s[i] <= '9')
		{
			found = 1;
			/* On construit le nombre chiffre par chiffre */
			res = (res * 10) + (s[i] - '0');
		}
		/* 4. Si on a deja trouve des chiffres et qu'on tombe sur autre chose */
		else if (found)
		{
			break;
		}
		i++;
	}

	/* 5. On applique le signe final */
	return (res * sign);
}

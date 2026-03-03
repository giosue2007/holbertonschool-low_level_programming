#include "main.h"

/**
 * _atoi - convertit une chaine en entier
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
		/* 1. On gere les signes : chaque '-' inverse le signe actuel */
		if (s[i] == '-')
		{
			sign *= -1;
		}

		/* 2. Si on trouve un chiffre (ASCII entre 48 et 57) */
		if (s[i] >= '0' && s[i] <= '9')
		{
			found = 1;
			/* On multiplie le resultat precedent par 10 pour decaler d'un rang */
			/* Puis on ajoute la valeur numerique du caractere actuel */
			res = (res * 10) + (s[i] - '0');
		}
		/* 3. Si on avait commence a trouver des chiffres et qu'on voit autre chose */
		else if (found == 1)
		{
			/* On s'arrete net ! C'est la regle d'atoi */
			break;
		}
		i++;
	}

	/* 4. On multiplie le resultat positif par le signe final (1 ou -1) */
	return (res * sign);
}

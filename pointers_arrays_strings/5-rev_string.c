#include "main.h"

/**
 * rev_string - inverse une chaine de caracteres
 * @s: pointeur vers la chaine
 */
void rev_string(char *s)
{
	int i, j, len;
	char temp;

	/* 1. Calcul de la longueur */
	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	/* 2. On place i au debut et j a la fin */
	i = 0;
	j = len - 1;

	/* 3. Echange des caracteres jusqu'au milieu */
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;

		i++;
		j--;
	}
}

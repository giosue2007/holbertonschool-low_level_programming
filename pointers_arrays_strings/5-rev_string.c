#include "main.h"

/**
 * rev_string - inverse une chaîne de caractères en mémoire
 * @s: la chaîne à modifier
 */
void rev_string(char *s)
{
	int i, j, len;
	char temp;

	/* 1. On compte la longueur */
	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	/* 2. On échange le premier avec le dernier, le 2ème avec l'avant-dernier... */
	i = 0;
	j = len - 1;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}

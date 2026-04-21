#include "main.h"

/**
 * leet - Encode une chaîne en 1337.
 * @s: La chaîne à encoder.
 *
 * Return: Un pointeur vers la chaîne modifiée.
 */
char *leet(char *s)
{
	int i, j;
	char l[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	i = 0;
	/* Première boucle : parcourt la chaîne s */
	while (s[i] != '\0')
	{
		j = 0;
		/* Deuxième boucle : compare avec les lettres du dictionnaire */
		while (l[j] != '\0')
		{
			/* L'unique "if" autorisé par les contraintes */
			if (s[i] == l[j])
			{
				s[i] = n[j];
			}
			j++;
		}
		i++;
	}

	return (s);
}

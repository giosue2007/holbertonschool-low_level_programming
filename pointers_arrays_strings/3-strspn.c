#include "main.h"

/**
 * _strspn - Calcule la longueur d'un segment de préfixe.
 * @s: La chaîne à analyser.
 * @accept: La chaîne contenant les caractères autorisés.
 *
 * Return: Le nombre d'octets dans le segment initial de s
 * constitués uniquement d'octets provenant de accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int count = 0;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}

		if (found == 1)
		{
			count++;
		}
		else
		{
			/* Dès qu'un caractère n'est pas trouvé, on arrête tout */
			return (count);
		}
	}

	return (count);
}

#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Recherche une chaîne pour n'importe quel ensemble d'octets.
 * @s: La chaîne à parcourir.
 * @accept: La chaîne contenant les caractères à rechercher.
 *
 * Return: Un pointeur vers l'octet dans s qui correspond à l'un des octets
 * de accept, ou NULL si aucun octet n'est trouvé.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	/* 1. On parcourt chaque caractère de la chaîne s */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* 2. On compare s[i] avec chaque caractère de accept */
		for (j = 0; accept[j] != '\0'; j++)
		{
			/* 3. Si on trouve une correspondance */
			if (s[i] == accept[j])
			{
				/* On retourne l'adresse mémoire actuelle (pointeur) */
				return (s + i);
			}
		}
	}

	/* 4. Si on a parcouru tout s sans trouver de correspondance */
	return (NULL);
}

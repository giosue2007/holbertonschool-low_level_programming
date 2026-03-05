#include "main.h"
#include <stddef.h>

/**
 * _strchr - Localise un caractère dans une chaîne.
 * @s: La chaîne dans laquelle chercher.
 * @c: Le caractère à trouver.
 *
 * Return: Un pointeur vers la première occurrence, ou NULL.
 */
char *_strchr(char *s, char c)
{
	/* On boucle tant qu'on n'a pas dépassé la fin de la chaîne */
	while (*s >= '\0')
	{
		/* Si la valeur pointée est égale au caractère cherché */
		if (*s == c)
		{
			/* On retourne l'adresse actuelle du pointeur */
			return (s);
		}
		
		/* Si on arrive au bout sans avoir trouvé 'c' */
		if (*s == '\0')
		{
			return (NULL);
		}
		
		/* On passe à la case mémoire suivante */
		s++;
	}
	return (NULL);
}

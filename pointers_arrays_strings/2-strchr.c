#include "main.h"
#include <stddef.h>

/**
 * _strchr - localise un caractère dans une chaîne.
 * @s: la chaîne dans laquelle chercher.
 * @c: le caractère à trouver.
 *
 * Return: un pointeur vers la première occurrence de c,
 * ou NULL si le caractère n'est pas trouvé.
 */
char *_strchr(char *s, char c)
{
	int i;

	/* On parcourt la chaîne caractère par caractère */
	/* La boucle inclut le caractère nul '\0' */
	for (i = 0; s[i] >= '\0'; i++)
	{
		/* Si on trouve le caractère recherché */
		if (s[i] == c)
		{
			/* On retourne l'adresse de ce caractère */
			/* &s[i] est équivalent à (s + i) */
			return (s + i);
		}
		
		/* Si on arrive au bout de la chaîne sans avoir trouvé c */
		if (s[i] == '\0')
			break;
	}

	return (NULL);
}

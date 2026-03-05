#include "main.h"
#include <stddef.h>

/**
 * _strstr - Localise une sous-chaîne.
 * @haystack: La chaîne dans laquelle chercher.
 * @needle: La sous-chaîne à trouver.
 *
 * Return: Un pointeur vers le début de la sous-chaîne trouvée,
 * ou NULL si elle n'est pas présente.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	/* Si l'aiguille est vide, on renvoie toute la botte de foin */
	if (*needle == '\0')
		return (haystack);

	/* On parcourt la botte de foin (haystack) */
	for (i = 0; haystack[i] != '\0'; i++)
	{
		/* Si la première lettre correspond, on vérifie la suite */
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] != '\0')
		{
			j++;
		}

		/* Si on a parcouru TOUTE l'aiguille (needle), c'est gagné ! */
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}

	return (NULL);
}

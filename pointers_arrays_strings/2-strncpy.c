#include "main.h"

/**
 * _strncpy - Copie une chaine de caractères
 * @dest: La destination
 * @src: La source
 * @n: Le nombre d'octets a copier
 *
 * Return: Un pointeur vers dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	/* ÉTAPE 1 : Copier src vers dest jusqu'à n ou la fin de src */
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* ÉTAPE 2 : Si n est plus grand que src, remplir le reste avec des \0 */
	/* C'est la règle officielle de strncpy pour la sécurité */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

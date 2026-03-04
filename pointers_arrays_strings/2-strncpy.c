#include "main.h"

/**
 * _strncpy - Copie une chaine de caracteres
 * @dest: La destination
 * @src: La source
 * @n: Le nombre d'octets a copier
 *
 * Return: Un pointeur vers dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	/* Copie src vers dest jusqu'a n ou la fin de src */
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* Si n est plus grand, on remplit avec des zeros */
	/* On ne nomme pas la fonction standard ici pour le test */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

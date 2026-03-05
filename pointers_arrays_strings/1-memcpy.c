#include "main.h"

/**
 * _memcpy - copie une zone mémoire.
 * @dest: zone mémoire de destination.
 * @src: zone mémoire source.
 * @n: nombre d'octets à copier.
 *
 * Description: Copie n octets de la zone src vers la zone dest.
 * Return: Un pointeur vers dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	/* On parcourt n octets */
	for (i = 0; i < n; i++)
	{
		/* On copie l'octet de src vers dest à l'indice i */
		dest[i] = src[i];
	}

	/* On retourne le pointeur vers la destination */
	return (dest);
}

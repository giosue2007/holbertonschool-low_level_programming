#include "main.h"

/**
 * _strcpy - copie la chaine src vers dest
 * @dest: le buffer de destination
 * @src: la chaine source a copier
 *
 * Return: le pointeur vers dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	/* Tant qu'on n'a pas atteint la fin de la source (\0) */
	while (src[i] != '\0')
	{
		/* On copie la lettre de src vers dest au meme index */
		dest[i] = src[i];
		i++;
	}

	/* TRES IMPORTANT : On n'oublie pas de copier le '\0' a la fin */
	dest[i] = '\0';

	/* L'enonce demande de retourner le pointeur dest */
	return (dest);
}

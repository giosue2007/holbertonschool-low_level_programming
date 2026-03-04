#include "main.h"

/**
 * _strcat - concatene deux chaines de caracteres
 * @dest: chaine de destination
 * @src: chaine source a ajouter
 *
 * Return: pointeur vers la chaine dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	/* 1. Aller a la fin de dest */
	while (dest[i] != '\0')
		i++;

	/* 2. Copier src a la suite */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* 3. Ajouter le caractere nul final */
	dest[i] = '\0';

	return (dest);
}

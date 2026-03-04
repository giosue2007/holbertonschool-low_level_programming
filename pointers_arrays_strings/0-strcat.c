#include "main.h"

/**
 * _strcat - concatene deux chaines de caracteres
 * @dest: la chaine de destination (celle qui va grandir)
 * @src: la chaine source (celle qu'on ajoute au bout)
 *
 * Return: un pointeur vers la chaine dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	/* 1. On cherche d'abord la fin de la chaine dest */
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	/* Une fois qu'on a trouve le '\0' de dest, on commence a copier src */
	/* L'index 'i' est maintenant positionne sur le '\0' de dest */
	/* 2. On ajoute src au bout de dest */
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* 3. On n'oublie pas de fermer la nouvelle grande chaine avec '\0' */
	dest[i] = '\0';

	/* On retourne l'adresse de la destination comme demande */
	return (dest);
}

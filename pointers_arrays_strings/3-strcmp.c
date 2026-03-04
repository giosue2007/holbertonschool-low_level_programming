#include "main.h"

/**
 * _strcmp - Compare deux chaines de caracteres
 * @s1: La premiere chaine
 * @s2: La deuxieme chaine
 *
 * Return: La difference entre les deux premiers caracteres differents
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	/* On parcourt les deux chaines tant qu'elles sont identiques */
	/* ET qu'on n'est pas arrive a la fin de s1 */
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}

	/* On renvoie la difference entre les caracteres ou on s'est arrete */
	/* Si les chaines sont identiques, ca fera 'x' - 'x' = 0 */
	return (s1[i] - s2[i]);
}

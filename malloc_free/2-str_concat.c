#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatène deux chaînes dans un nouvel espace mémoire.
 * @s1: La première chaîne.
 * @s2: La deuxième chaîne.
 *
 * Return: Pointeur vers la nouvelle chaîne, ou NULL en cas d'échec.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i, j, len1 = 0, len2 = 0;

	/* 1. Traiter les cas NULL comme des chaînes vides */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* 2. Calculer les longueurs */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/* 3. Allouer la mémoire (total + 1 pour le \0) */
	concat = malloc(sizeof(char) * (len1 + len2 + 1));

	/* 4. Vérifier si malloc a échoué */
	if (concat == NULL)
		return (NULL);

	/* 5. Copier s1 */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* 6. Copier s2 juste après s1 */
	for (j = 0; j < len2; j++, i++)
		concat[i] = s2[j];

	/* 7. Ajouter le caractère nul final */
	concat[i] = '\0';

	return (concat);
}

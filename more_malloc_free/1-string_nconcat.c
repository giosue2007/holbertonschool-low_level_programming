#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatène deux chaînes avec une limite n.
 * @s1: Première chaîne.
 * @s2: Deuxième chaîne.
 * @n: Nombre d'octets de s2 à ajouter.
 *
 * Return: Pointeur vers le nouvel espace, ou NULL si échec.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	/* 1. Sécurité : si NULL, on transforme en "" */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* 2. On compte les longueurs */
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	/* 3. Si n est trop grand, on prend tout s2 */
	if (n >= len2)
		n = len2;

	/* 4. Allocation : Taille s1 + n de s2 + 1 pour le \0 */
	s = malloc(sizeof(char) * (len1 + n + 1));
	if (s == NULL)
		return (NULL);

	/* 5. Copie de s1 */
	for (i = 0; i < len1; i++)
		s[i] = s1[i];

	/* 6. Copie de n octets de s2 */
	for (j = 0; j < n; j++)
	{
		s[i] = s2[j];
		i++;
	}

	/* 7. Point final obligatoire */
	s[i] = '\0';

	return (s);
}

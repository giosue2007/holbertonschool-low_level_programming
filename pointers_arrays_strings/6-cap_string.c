#include "main.h"

/**
 * is_separator - Vérifie si un caractère est un séparateur de mots.
 * @c: Le caractère à tester.
 *
 * Return: 1 si c'est un séparateur, 0 sinon.
 */
int is_separator(char c)
{
	int i;
	char sep[] = " \t\n,;.!?\"(){}";

	for (i = 0; sep[i] != '\0'; i++)
	{
		if (c == sep[i])
			return (1);
	}
	return (0);
}

/**
 * cap_string - Capitalise tous les mots d'une chaîne de caractères.
 * @str: La chaîne à modifier.
 *
 * Return: Un pointeur vers la chaîne modifiée.
 */
char *cap_string(char *str)
{
	int i = 0;

	/* On capitalise le premier caractère s'il s'agit d'une minuscule */
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;

	while (str[i] != '\0')
	{
		/* Si le caractère actuel est un séparateur */
		if (is_separator(str[i]))
		{
			/* On vérifie si le caractère suivant est une minuscule */
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				/* Transformation en majuscule via la table ASCII */
				str[i + 1] -= 32;
			}
		}
		i++;
	}

	return (str);
}
/* Ajoute bien une ligne vide ici avant d'enregistrer */

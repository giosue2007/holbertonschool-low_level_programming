#include "main.h"

/**
 * string_toupper - Change toutes les minuscules d'une chaîne en majuscules.
 * @str: La chaîne de caractères à modifier.
 *
 * Return: Un pointeur vers la chaîne modifiée.
 */
char *string_toupper(char *str)
{
	int i = 0;

	/* On parcourt la chaîne jusqu'au caractère nul de fin '\0' */
	while (str[i] != '\0')
	{
		/* Si le caractère est compris entre 'a' et 'z' */
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			/* On soustrait 32 pour obtenir la majuscule */
			/* str[i] = str[i] - 32; est aussi possible */
			str[i] -= 32;
		}
		i++;
	}

	return (str);
}
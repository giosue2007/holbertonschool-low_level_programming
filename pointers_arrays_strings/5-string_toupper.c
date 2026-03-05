#include "main.h"

/**
 * string_toupper - Change toutes les minuscules d'une chaîne en majuscules.
 * @str: La chaîne de caractères à modifier.
 *
 * Description: Parcourt la chaîne et soustrait 32 à la valeur ASCII
 * de chaque lettre minuscule trouvée.
 * Return: Un pointeur vers la chaîne modifiée.
 */
char *string_toupper(char *str)
{
	int i = 0;

	/* Boucle jusqu'à la fin de la chaîne (caractère nul) */
	while (str[i] != '\0')
	{
		/* Vérifie si le caractère actuel est une minuscule (a-z) */
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			/* Soustrait 32 pour passer de minuscule à majuscule */
			str[i] = str[i] - 32;
		}
		i++;
	}

	return (str);
}
/* Assure-toi qu'il y a bien une ligne vide juste ici ! */

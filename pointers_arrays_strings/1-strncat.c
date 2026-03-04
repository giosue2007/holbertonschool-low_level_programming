#include "main.h"

/**
 * _strncat - Concatène deux chaînes avec une limite de n octets.
 * @dest: La chaîne de destination (où on ajoute).
 * @src: La source (ce qu'on veut coller).
 * @n: Le nombre maximum de caractères à prendre de src.
 *
 * Return: Un pointeur vers la chaîne finale dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	/* ÉTAPE 1 : Trouver la fin de dest */
	/* On avance jusqu'au '\0' pour savoir où commencer à coller */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* ÉTAPE 2 : Copier src dans dest avec une DOUBLE sécurité */
	/* On s'arrête SI :
	   - On arrive au bout de src (src[j] == '\0')
	   - OU SI on a déjà copié n caractères (j == n) */
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* ÉTAPE 3 : La signature finale */
	/* On doit fermer la chaîne dest avec un '\0' pour qu'elle soit valide */
	dest[i] = '\0';

	return (dest);
}


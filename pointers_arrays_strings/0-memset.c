#include "main.h"

/**
 * _memset - remplit la mémoire avec un octet constant.
 * @s: pointeur vers la zone mémoire à remplir.
 * @b: l'octet constant à copier.
 * @n: le nombre d'octets à remplir.
 *
 * Description: Parcourt la zone pointée par s et remplace les n premiers
 * octets par la valeur b.
 * Return: Un pointeur vers la zone mémoire s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	/* On boucle n fois pour remplir n octets */
	for (i = 0; i < n; i++)
	{
		/* On assigne la valeur b à l'index i du pointeur s */
		s[i] = b;
	}

	/* La fonction doit retourner le pointeur d'origine s */
	return (s);
}

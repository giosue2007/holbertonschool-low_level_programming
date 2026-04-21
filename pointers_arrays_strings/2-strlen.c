#include "main.h"

/**
 * _strlen - calcule la longueur d'une chaine
 * @s: la chaine a mesurer
 *
 * Return: la longueur
 */
int _strlen(char *s)
{
	int longue;

	longue = 0;
	while (s[longue] != '\0')
	{
		longue++;
	}
	return (longue);
}

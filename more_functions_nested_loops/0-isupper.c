#include "main.h"

/**
 * _insupper - Vérifie si un caractere est une majusqule.
 * @c: Le caractère à verifier (représenté par son code ASCII).
 *
 * Return: 1 si c'est une majuscule, 0 sinon,
 */
int_insupper(int c)
{
	/*En ASCII, les majuscule vont de 'a' (65 ) à 'z' (90)*/
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

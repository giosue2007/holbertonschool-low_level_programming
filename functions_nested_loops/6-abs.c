#include "main.h"

/**
 * _abs - Calcule la valeur absolue d'un entier
 * @n: Le nombre à vérifier
 *
 * Return: La valeur absolue de n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}

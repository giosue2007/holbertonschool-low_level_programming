#include "main.h"

/**
 * _isalpha - Vérifie si c'est une lettre
 * @c: Le caractère à tester
 * Return: 1 si c'est une lettre, 0 sinon
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

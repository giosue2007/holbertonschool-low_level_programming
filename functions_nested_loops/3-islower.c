#include "main.h"

/**
 * _islower - Verifies if a character is lowercase
 * @c: The character to be verified
 *
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

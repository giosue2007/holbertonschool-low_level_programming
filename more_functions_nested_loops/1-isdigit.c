#include "main.h"
#include <stdio.h>
/**
 * int _isdigit(int c);- check the code.
 *
 * @c: character to be checked
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

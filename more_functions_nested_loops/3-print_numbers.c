#include "main.h"
#include <stdio.h>
/**
 * _print_number - check the code.
 *
 * @c: character to be checked
 * Return: Always 0.
 */
int _print_number(int c)
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

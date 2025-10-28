#include "main.h"
#include <stdio.h>
/**
* more_numbers - numbers, from 0 to 14
*
*
* Return: Always 0.
*/
void more_numbers(void)
{
	int c;
	int i = 0;

	while (i < 14)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar((c / 14) + '0');
			}
			_putchar((c % 14) + '0');
		}
		_putchar('\n');
		i++;
	}

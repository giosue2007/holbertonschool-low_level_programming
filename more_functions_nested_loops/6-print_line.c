#include "main.h"
#include <stdio.h>
/**
* more_numbers - numbers, from 0 to 14
*
*
* Return: Always 0.
*/
void print_line(int n)
{
 
	while (n > 0)	
	{	
		_putchar('_');
		n--;
	}
	_putchar('\n');
}

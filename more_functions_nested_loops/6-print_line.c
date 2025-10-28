#include "main.h"
#include <stdio.h>
/**
* print_line - draws a straight line in the terminal
* @n: the length
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

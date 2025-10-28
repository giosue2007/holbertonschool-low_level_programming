#include "main.h"
#include <stdio.h>
/**
* print_square - Write a function that prints a square, followed by a new line.
*
*
* Return: Always 0.
*/
void print_square(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
    	int i2;

		for (i2= 0; i2 < size; i2++)
		{
    		_putchar('#');
		}
		_putchar('\n');
	}
}

int main(void)
{
    print_square(2);
    print_square(10);
    print_square(0);
    return (0);
}
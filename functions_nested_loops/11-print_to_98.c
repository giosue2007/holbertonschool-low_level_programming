#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the number to enter
 *
 * Return: Always nothing
 */
void print_to_98(int n)
{
	if (n != 98)
	{
		printf("%d, ", n);
	}
	else
	{
		printf("98\n");
	}

	while (n != 98)
	{
		if (n < 98)
		{
			n++;
		}
		else
		{
			n--;
		}

		if (n != 98)
		{
			printf("%d, ", n);
		}
		else
		{
			printf("98\n");
		}
	}
}

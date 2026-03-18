#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a, b;
	int (*func)(int, int);

	/* IF 1 : Vérifie le nombre d'arguments */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	func = get_op_func(argv[2]);

	/* IF 2 : Vérifie si l'opérateur est valide (ex: pas de "++" ou "z") */
	if (func == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	/* IF 3 : Vérifie la division ou le modulo par zéro */
	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", func(a, b));
	return (0);
}

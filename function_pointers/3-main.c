#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Performe des opérations simples
 * @argc: Nombre d'arguments
 * @argv: Tableau d'arguments
 *
 * Return: 0 (Succès)
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* ON RÉCUPÈRE LA FONCTION D'ABORD */
	f = get_op_func(argv[2]);

	/* TEST OPÉRATEUR (CHECK 12) - DOIT ÊTRE ICI */
	if (f == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	/* TEST DIVISION PAR ZÉRO - DOIT ÊTRE APRÈS */
	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(a, b));
	return (0);
}

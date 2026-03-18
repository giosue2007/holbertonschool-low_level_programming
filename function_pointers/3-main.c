#include "3-calc.h"

/**
 * main - Effectue l'operation demandee
 * @argc: Nombre d'arguments
 * @argv: Tableau d'arguments
 *
 * Return: 0 (Succes)
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	f = get_op_func(argv[2]);

	if (f == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = f(a, b);

	printf("%d\n", result);

	return (0);
}

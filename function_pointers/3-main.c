#include "3-calc.h"

int main(int argc, char *argv[])
{
	int a, b;
	int (*f)(int, int);

	/* 1. D'abord on vérifie le nombre d'arguments */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* 2. On cherche la fonction correspondant à l'opérateur */
	f = get_op_func(argv[2]);

	/* --- C'EST ICI QUE TU METS LE CORRECTIF POUR LE CHECK 12 --- */
	if (f == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	/* ----------------------------------------------------------- */

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	/* 3. Enfin, on vérifie la division par zéro */
	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(a, b));
	return (0);
}
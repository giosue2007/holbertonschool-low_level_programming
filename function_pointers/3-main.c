#include "3-calc.h"

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

	/* Check 98: Nombre d'arguments */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* Récupération de la fonction */
	f = get_op_func(argv[2]);

	/* Check 99: Opérateur invalide ou trop long (LE fameux Check 12) */
	if (f == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	/* Check 100: Division ou Modulo par zéro */
	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(a, b));

	return (0);
}
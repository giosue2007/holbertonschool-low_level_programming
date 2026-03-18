#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Effectue des opérations simples.
 * @argc: Nombre d'arguments.
 * @argv: Tableau d'arguments.
 *
 * Return: 0 en cas de succès.
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*f)(int, int);

	/* 1. Vérification du nombre d'arguments (98) */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* On récupère la fonction avant de tester quoi que ce soit d'autre */
	f = get_op_func(argv[2]);

	/* 2. Vérification de l'opérateur (99) */
	/* f == NULL : l'opérateur n'est pas dans la liste */
	/* argv[2][1] != '\0' : l'opérateur fait plus d'un caractère (ex: "++") */
	if (f == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	/* 3. Vérification division/modulo par zéro (100) */
	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(a, b));

	return (0);
}

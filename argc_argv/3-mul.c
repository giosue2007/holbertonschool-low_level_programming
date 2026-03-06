#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplie deux nombres passés en arguments.
 * @argc: Le nombre d'arguments.
 * @argv: Le tableau des arguments.
 *
 * Return: 0 en cas de succès, 1 si le nombre d'arguments est incorrect.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	/* On vérifie si on a exactement 3 arguments (nom + num1 + num2) */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* On convertit les chaînes de caractères en entiers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	/* On fait le calcul */
	result = num1 * num2;

	/* On affiche le résultat */
	printf("%d\n", result);

	return (0);
}

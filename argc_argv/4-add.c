#include <stdio.h>
#include <stdlib.h>

/**
 * main - Additionne des nombres positifs passés en arguments.
 * @argc: Nombre d'arguments.
 * @argv: Tableau des arguments.
 *
 * Return: 0 si succès, 1 si un argument contient des symboles non-numériques.
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	/* 1. Si aucun nombre n'est passé (seulement le nom du programme) */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* 2. On parcourt chaque argument en commençant à 1 */
	for (i = 1; i < argc; i++)
	{
		/* 3. On vérifie chaque caractère du mot actuel */
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			/* Si le caractère n'est pas un chiffre entre '0' et '9' */
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		/* 4. Si le mot est valide, on le convertit et on l'ajoute */
		sum += atoi(argv[i]);
	}

	/* 5. On affiche le résultat final */
	printf("%d\n", sum);

	return (0);
}

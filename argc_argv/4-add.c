#include <stdio.h>
#include <stdlib.h>

/**
 * main - Additionne des nombres positifs passés en arguments.
 * @argc: Le nombre d'arguments passés au programme.
 * @argv: Un tableau de chaînes de caractères (les arguments).
 *
 * Return: 0 en cas de succès, 1 si un argument contient des
 * symboles qui ne sont pas des chiffres.
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}

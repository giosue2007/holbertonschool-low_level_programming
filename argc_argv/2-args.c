#include <stdio.h>

/**
 * main - Affiche tous les arguments reçus par le programme.
 * @argc: Le nombre d'arguments.
 * @argv: Le tableau contenant les chaînes de caractères des arguments.
 *
 * Return: Toujours 0.
 */
int main(int argc, char *argv[])
{
	int i;

	/* On commence à 0 pour inclure le nom du programme */
	for (i = 0; i < argc; i++)
	{
		/* On affiche la chaîne de caractères située à l'index i */
		printf("%s\n", argv[i]);
	}

	return (0);
}

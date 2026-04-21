#include <stdio.h>

/**
 * main - Affiche le nombre d'arguments passés au programme.
 * @argc: Le nombre d'arguments.
 * @argv: Le tableau des arguments (non utilisé ici).
 *
 * Return: Toujours 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	/* On affiche argc - 1 car on ne compte pas le nom du programme */
	printf("%d\n", argc - 1);

	return (0);
}

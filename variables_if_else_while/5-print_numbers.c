#include <stdio.h>

/**
 * main - Point d'entree
 *
 * Description: Affiche tous les chiffres de 0 a 9
 * Return: Toujours 0 (Succes)
 */
int main(void)
{
	int n;

	/* On commence a 0, on s'arrete avant 10, on ajoute 1 a chaque fois */
	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}

	printf("\n");

	return (0);
}

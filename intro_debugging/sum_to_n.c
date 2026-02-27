#include <stdio.h>

/**
 * sum_to_n - calcule la somme des entiers de 1 à n
 * @n: le nombre limite
 *
 * Return: la somme totale
 */
int sum_to_n(int n)
{
	int i;
	int sum = 0;

	/* On utilise <= pour inclure n dans le calcul */
	for (i = 1; i <= n; i++)
	{
		sum += i;
	}

	/* On renvoie la variable sum, pas n ! */
	return (sum);
}

int main(void)
{
	printf("%d\n", sum_to_n(10));
	return (0);
}

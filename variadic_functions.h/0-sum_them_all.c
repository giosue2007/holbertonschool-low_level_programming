#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters passed to the function.
 * @...: A variable number of parameters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 * Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	int sum = 0;

	/* Condition CRUCIALE du sujet : si n est 0, on stop tout */
	if (n == 0)
		return (0);

	/* On prépare la liste d'arguments après 'n' */
	va_start(nums, n);

	/* On boucle pour récupérer chaque nombre */
	for (i = 0; i < n; i++)
	{
		/* On additionne en précisant que c'est un 'int' */
		sum += va_arg(nums, int);
	}

	/* On nettoie proprement avant de partir */
	va_end(nums);

	return (sum);
}

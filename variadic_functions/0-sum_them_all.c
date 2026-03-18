#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - calcule la somme de tous ses paramètres
 * @n: le nombre de paramètres passés à la fonction
 * @...: les nombres à additionner
 *
 * Return: la somme totale, ou 0 si n est nul
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	/* Condition obligatoire du sujet */
	if (n == 0)
		return (0);

	/* Initialisation de la liste d'arguments */
	va_start(ap, n);

	/* On boucle pour additionner chaque nombre */
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	/* On ferme la liste proprement */
	va_end(ap);

	return (sum);
}

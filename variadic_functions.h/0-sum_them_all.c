#include "variadic_function.h"
#include <stdarg.h>

/**
 * sum_them_all - Calcule la somme de tous ses paramètres.
 * @n: Le nombre de paramètres passés à la fonction.
 * @...: Les paramètres à additionner.
 *
 * Return: La somme de tous les paramètres, ou 0 si n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	/* Initialise la liste d'arguments avec le dernier paramètre fixe n */
	va_start(ap, n);

	/* Parcourt tous les arguments fournis */
	for (i = 0; i < n; i++)
	{
		/* Récupère l'argument suivant de type int et l'ajoute à la somme */
		sum += va_arg(ap, int);
	}

	/* Nettoie la liste d'arguments */
	va_end(ap);

	return (sum);
}

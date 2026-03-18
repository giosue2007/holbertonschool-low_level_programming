#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - fait la somme de tous ses paramètres
 * @n: le nombre d'arguments envoyés
 * @...: les nombres à additionner
 *
 * Return: la somme totale, ou 0 si n est nul
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list panier;
	unsigned int i;
	int somme = 0;

	/* Si n est 0, le sujet dit de retourner 0 */
	if (n == 0)
		return (0);

	/* 1. Initialisation : on commence après 'n' */
	va_start(panier, n);

	/* 2. On boucle n fois pour tout récupérer */
	for (i = 0; i < n; i++)
	{
		/* On pioche un 'int' et on l'ajoute */
		somme += va_arg(panier, int);
	}

	/* 3. On nettoie tout avant de finir */
	va_end(panier);

	return (somme);
}

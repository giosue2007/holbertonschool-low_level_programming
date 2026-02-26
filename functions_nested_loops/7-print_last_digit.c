#include "main.h"

/**
 * print_last_digit - Affiche le dernier chiffre d'un nombre
 * @n: Le nombre en question
 *
 * Return: La valeur du dernier chiffre
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;

	/* Si le nombre est négatif, le modulo sera négatif (ex: -4) */
	/* On doit le transformer en positif pour l'afficher */
	if (last < 0)
	{
		last = last * -1;
	}

	_putchar(last + '0'); /* On affiche le chiffre */
	return (last);        /* On renvoie la valeur du chiffre */
}

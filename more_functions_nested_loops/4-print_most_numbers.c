#include "main.h"

/**
 * print_most_numbers - Affiche les chiffres de 0 à 9 sauf 2 et 4.
 *
 * Description: Utilise une boucle et une condition if.
 * On respecte la contrainte de deux _putchar maximum.
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		/* On vérifie si i n'est pas '2' ET n'est pas '4' */
		if (i != '2' && i != '4')
		{
			_putchar(i); /* Premier usage */
		}
	}
	_putchar('\n'); /* Deuxième usage */
}

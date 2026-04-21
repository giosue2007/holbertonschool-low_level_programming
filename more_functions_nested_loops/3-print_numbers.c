#include "main.h"

/**
 * print_numbers - Affiche les chiffres de 0 à 9 suivis d'une nouvelle ligne.
 *
 * Description: Utilise une boucle pour parcourir les chiffres.
 * On ne peut utiliser _putchar que deux fois au total.
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i); /* Premier usage de _putchar */
	}
	_putchar('\n'); /* Deuxième usage de _putchar */
}

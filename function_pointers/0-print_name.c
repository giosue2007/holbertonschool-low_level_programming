#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Affiche un nom via un pointeur de fonction.
 * @name: Le nom à afficher.
 * @f: La fonction d'affichage à utiliser.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}

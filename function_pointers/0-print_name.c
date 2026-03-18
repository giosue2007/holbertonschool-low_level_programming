#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Affiche un nom.
 * @name: Le nom à afficher (chaîne de caractères).
 * @f: Pointeur vers la fonction de rappel (callback) pour l'affichage.
 *
 * Return: Rien (void).
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}

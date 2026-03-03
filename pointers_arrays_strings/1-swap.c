#include "main.h"

/**
 * swap_int - échange les valeurs de deux entiers
 * @a: pointeur vers le premier entier
 * @b: pointeur vers le second entier
 */
void swap_int(int *a, int *b)
{
	int temp; // Le "verre vide" (variable temporaire)

	temp = *a; // On verse le contenu de A dans le verre vide
	*a = *b;   // On verse le contenu de B dans A
	*b = temp; // On verse le contenu du verre vide (l'ancien A) dans B
}

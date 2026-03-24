#include <stddef.h>
#include "lists.h"

/**
 * list_len - calcule le nombre d'éléments d'une liste list_t
 * @h: pointeur vers le début de la liste
 *
 * Return: le nombre total de nœuds
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}

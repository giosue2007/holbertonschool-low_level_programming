#include "lists.h"

/**
 * dlistint_len - renvoie le nombre d'éléments d'une liste dlistint_t
 * @h: pointeur vers la tête de la liste
 *
 * Return: le nombre de nœuds
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}

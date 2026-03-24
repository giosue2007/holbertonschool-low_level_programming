#include <stdio.h>
#include "lists.h"

/**
 * print_list - affiche tous les elements d'une liste list_t
 * @h: pointeur vers la tete de la liste
 *
 * Return: le nombre de noeuds
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		s++;
	}

	return (s);
}

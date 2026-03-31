#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/* Ajoute bien l'étoile * et le point-virgule ; */
void free_dlistint(dlistint_t *head);
size_t print_dlistint(const dlistint_t *h);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

#endif

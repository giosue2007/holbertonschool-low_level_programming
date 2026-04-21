#include "lists.h"

/**
 * insert_dnodeint_at_index - insère un nœud à un index donné
 * @h: double pointeur vers la tête de la liste
 * @idx: index d'insertion (commence à 0)
 * @n: valeur du nouveau nœud
 *
 * Return: adresse du nouveau nœud ou NULL en cas d'échec
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	while (temp != NULL && i < (idx - 1))
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (NULL);

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = temp->next;
	new->prev = temp;
	temp->next->prev = new;
	temp->next = new;

	return (new);
}

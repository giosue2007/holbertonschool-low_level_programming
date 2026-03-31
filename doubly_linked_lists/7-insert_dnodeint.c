#include "lists.h"

/**
 * insert_dnodeint_at_index - insère un nouveau nœud à une position donnée
 * @h: double pointeur vers la tête de la liste
 * @idx: index où le nouveau nœud doit être ajouté (commence à 0)
 * @n: donnée entière du nouveau nœud
 *
 * Return: adresse du nouveau nœud, ou NULL en cas d'échec
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int i = 0;

	/* Cas 1 : Insertion au début */
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* On avance jusqu'à l'index - 1 */
	while (temp != NULL && i < (idx - 1))
	{
		temp = temp->next;
		i++;
	}

	/* Si on est sorti de la liste avant d'atteindre l'index */
	if (temp == NULL)
		return (NULL);

	/* Cas 2 : Insertion à la fin */
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	/* Cas 3 : Insertion au milieu */
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

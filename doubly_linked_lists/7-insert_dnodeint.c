#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* On avance jusqu'à l'élément juste AVANT l'index */
	while (temp != NULL && i < (idx - 1))
	{
		temp = temp->next;
		i++;
	}

	/* Si l'index est trop loin */
	if (temp == NULL)
		return (NULL);

	/* Si l'index est pile à la fin */
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	/* Insertion au MILIEU (La partie délicate) */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = temp->next; /* Le nouveau pointe vers le suivant */
	new->prev = temp;       /* Le nouveau pointe vers temp */
	
	/* IMPORTANT: On met à jour les voisins existants */
	temp->next->prev = new; /* Le suivant pointe vers le nouveau */
	temp->next = new;       /* Temp pointe vers le nouveau */

	return (new);
}

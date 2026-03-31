#include "lists.h"

/**
 * insert_dnodeint_at_index - insère un nœud à un index donné
 * @h: double pointeur vers la tête de la liste
 * @idx: index d'insertion (commence à 0)
 * @n: valeur du nouveau nœud
 * Return: adresse du nouveau nœud ou NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	/* Cas 1 : Insertion au début */
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* Navigation jusqu'au nœud JUSTE AVANT l'index voulu */
	while (temp != NULL && i < (idx - 1))
	{
		temp = temp->next;
		i++;
	}

	/* Si l'index est hors de portée (trop grand) */
	if (temp == NULL)
		return (NULL);

	/* Cas 2 : Insertion à la fin (si temp est le dernier nœud) */
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	/* Cas 3 : Insertion au milieu */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = temp->next; /* Le nouveau pointe vers le suivant de temp */
	new->prev = temp;       /* Le nouveau pointe en arrière vers temp */
	
	/* On met à jour les voisins */
	temp->next->prev = new; /* Le nœud suivant pointe en arrière vers le nouveau */
	temp->next = new;       /* Temp pointe vers le nouveau */

	return (new);
}

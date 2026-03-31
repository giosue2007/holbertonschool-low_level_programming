#include "lists.h"

/**
 * get_dnodeint_at_index - renvoie le n-ième nœud d'une liste dlistint_t
 * @head: pointeur vers la tête de la liste
 * @index: index du nœud à trouver (commence à 0)
 *
 * Return: l'adresse du nœud, ou NULL s'il n'existe pas
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;
	}

	return (NULL);
}

#include "lists.h"

/**
 * delete_dnodeint_at_index - supprime le nœud à l'index donné
 * @head: double pointeur vers la tête de la liste
 * @index: index du nœud à supprimer (commence à 0)
 *
 * Return: 1 si succès, -1 si échec
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	/* Cas 1 : Supprimer le premier nœud */
	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	/* On avance jusqu'au nœud à supprimer */
	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}

	/* Si l'index est hors de portée */
	if (temp == NULL)
		return (-1);

	/* Cas 2 & 3 : Milieu ou Fin */
	/* On relie le nœud précédent au nœud suivant */
	temp->prev->next = temp->next;

	/* Si ce n'est pas le dernier nœud, on relie le suivant au précédent */
	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	free(temp);
	return (1);
}

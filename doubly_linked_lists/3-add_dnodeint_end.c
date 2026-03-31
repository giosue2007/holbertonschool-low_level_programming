#include "lists.h"

/**
 * add_dnodeint_end - ajoute un nouveau nœud à la fin d'une liste dlistint_t
 * @head: double pointeur vers la tête de la liste
 * @n: l'entier à stocker dans le nouveau nœud
 *
 * Return: l'adresse du nouvel élément, ou NULL en cas d'échec
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	if (head == NULL)
		return (NULL);

	/* 1. Création du nouveau nœud */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL; /* Il sera le dernier, donc rien après lui */

	/* 2. Si la liste est vide, le nouveau devient la tête */
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	/* 3. Sinon, on cherche le dernier nœud actuel */
	last = *head;
	while (last->next != NULL)
		last = last->next;

	/* 4. On fait le double branchement */
	last->next = new;   /* L'ancien dernier pointe vers le nouveau */
	new->prev = last;  /* Le nouveau pointe vers l'ancien dernier */

	return (new);
}

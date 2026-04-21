#include "lists.h"

/**
 * add_dnodeint - ajoute un nouveau nœud au début d'une liste dlistint_t
 * @head: double pointeur vers la tête de la liste
 * @n: l'entier à ajouter dans le nouveau nœud
 *
 * Return: l'adresse du nouvel élément, ou NULL en cas d'échec
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	/* 1. Allocation de la mémoire */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	/* 2. Remplissage du nouveau nœud */
	new->n = n;
	new->prev = NULL; /* Il est au début, donc personne avant lui */
	new->next = *head; /* Son "suivant" est l'actuelle tête */

	/* 3. Ajustement de l'ancienne tête */
	if (*head != NULL)
		(*head)->prev = new;

	/* 4. La tête de la liste devient notre nouveau nœud */
	*head = new;

	return (new);
}

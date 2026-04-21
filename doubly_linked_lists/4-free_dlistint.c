#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the head of the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next; /* 1. On sauvegarde l'adresse du suivant */
		free(head);        /* 2. On libère le nœud actuel */
		head = temp;       /* 3. On passe au suivant sauvegardé */
	}
}

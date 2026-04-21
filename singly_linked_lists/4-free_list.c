#include <stdlib.h>
#include "lists.h"

/**
 * free_list - libère une liste list_t
 * @head: pointeur vers le début de la liste
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next; /* On garde l'adresse du suivant */
		free(head->str);   /* On libère la chaîne du wagon actuel */
		free(head);        /* On libère le wagon actuel */
		head = temp;       /* On passe au wagon suivant */
	}
}

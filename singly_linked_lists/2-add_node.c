#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - ajoute un nouveau nœud au début d'une liste list_t
 * @head: double pointeur vers la liste list_t
 * @str: chaîne de caractères à ajouter dans le nœud
 *
 * Return: l'adresse du nouvel élément, ou NULL en cas d'échec
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	/* Calcule la longueur de la chaîne */
	while (str[len])
		len++;

	/* Alloue la mémoire pour le nouveau nœud */
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	/* Duplique la chaîne de caractères */
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}

	new->len = len;
	/* Le nouveau nœud pointe vers l'ancienne tête de liste */
	new->next = *head;
	/* La tête de liste pointe maintenant vers le nouveau nœud */
	*head = new;

	return (new);
}

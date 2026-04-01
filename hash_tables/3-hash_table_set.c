#include "hash_tables.h"

/**
 * hash_table_set - ajoute ou met à jour un élément dans la table
 * @ht: la table de hachage
 * @key: la clé (ne peut pas être vide)
 * @value: la valeur associée (doit être dupliquée)
 *
 * Return: 1 si succès, 0 sinon
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *temp;
	unsigned long int index;
	char *new_value;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	/* 1. Vérifier si la clé existe déjà pour la mettre à jour */
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(temp->value);
			temp->value = new_value;
			return (1);
		}
		temp = temp->next;
	}

	/* 2. Si la clé n'existe pas, créer un nouveau nœud */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	/* 3. Insérer au début de la liste (gestion de collision) */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

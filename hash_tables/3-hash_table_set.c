#include "hash_tables.h"

/**
 * create_node - Crée un nouveau nœud pour la table de hachage
 * @key: La clé
 * @value: La valeur
 *
 * Return: Le nouveau nœud ou NULL si échec
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (NULL);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (NULL);
	}
	new->next = NULL;
	return (new);
}

/**
 * hash_table_set - Ajoute ou met à jour un élément
 * @ht: La table de hachage
 * @key: La clé
 * @value: La valeur
 *
 * Return: 1 si succès, 0 sinon
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new, *temp;
	char *val_copy;

	if (!ht || !key || !*key || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			val_copy = strdup(value);
			if (!val_copy)
				return (0);
			free(temp->value);
			temp->value = val_copy;
			return (1);
		}
		temp = temp->next;
	}
	new = create_node(key, value);
	if (!new)
		return (0);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}

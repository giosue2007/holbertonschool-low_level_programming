#include "hash_tables.h"

/**
 * hash_table_get - récupère une valeur associée à une clé
 * @ht: la table de hachage
 * @key: la clé recherchée
 *
 * Return: la valeur (chaîne), ou NULL si non trouvée
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	/* 1. Sécurité : on vérifie si la table ou la clé existe */
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/* 2. On trouve où la clé devrait être rangée */
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	/* 3. On parcourt la liste chaînée à cet index */
	node = ht->array[index];
	while (node)
	{
		/* Si on trouve la clé exacte, on renvoie sa valeur */
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	/* Clé non trouvée */
	return (NULL);
}

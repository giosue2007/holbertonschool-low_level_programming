#include "hash_tables.h"

/**
 * hash_table_get - récupère la valeur associée à une clé
 * @ht: la table de hachage dans laquelle chercher
 * @key: la clé que l'on recherche
 *
 * Return: la valeur associée, ou NULL si la clé n'est pas trouvée
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	/* 1. Vérifications de sécurité */
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/* 2. Calcul de la position exacte dans le tableau */
	index = key_index((const unsigned char *)key, ht->size);

	/* 3. On pointe sur le premier élément de ce "tiroir" */
	temp = ht->array[index];

	/* 4. On parcourt la liste chaînée à cet index */
	while (temp != NULL)
	{
		/* Si on trouve la clé exacte, on renvoie sa valeur */
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	/* Si on arrive ici, c'est que la clé n'existe pas */
	return (NULL);
}

#include "hash_tables.h"

/**
 * hash_table_delete - supprime une table de hachage
 * @ht: la table de hachage à supprimer
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *next_node;
	unsigned long int i;

	if (ht == NULL)
		return;

	/* 1. On parcourt chaque case du tableau */
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		/* 2. On vide la liste chaînée s'il y en a une */
		while (node != NULL)
		{
			/* On sauvegarde le suivant AVANT de libérer l'actuel */
			next_node = node->next;

			/* Libération des données du nœud */
			free(node->key);
			free(node->value);

			/* Libération du nœud lui-même */
			free(node);

			/* On passe au suivant qu'on a sauvegardé */
			node = next_node;
		}
	}

	/* 3. On libère le tableau de pointeurs */
	free(ht->array);

	/* 4. On libère la structure globale */
	free(ht);
}

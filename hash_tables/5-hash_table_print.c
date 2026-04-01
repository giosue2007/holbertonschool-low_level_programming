#include "hash_tables.h"

/**
 * hash_table_print - affiche une table de hachage
 * @ht: la table de hachage à afficher
 *
 * Description: affiche les paires clé/valeur dans l'ordre du tableau
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	int comma_flag = 0; /* Pour savoir s'il faut mettre une virgule */

	if (ht == NULL)
		return;

	printf("{");

	/* On parcourt chaque case du tableau */
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		/* On parcourt la liste chaînée à cet index */
		while (node != NULL)
		{
			/* Si on a déjà écrit un élément, on met une virgule et un espace */
			if (comma_flag == 1)
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);
			
			/* On active le flag pour les prochains éléments */
			comma_flag = 1;
			node = node->next;
		}
	}

	printf("}\n");
}

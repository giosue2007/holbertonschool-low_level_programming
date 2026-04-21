#include "hash_tables.h"

/**
 * key_index - donne l'index d'une clé dans le tableau
 * @key: la clé (chaîne de caractères)
 * @size: la taille du tableau de la table de hachage
 *
 * Return: l'index où la clé doit être stockée
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	/* 1. On calcule le grand nombre avec djb2 */
	hash = hash_djb2(key);

	/* 2. On le ramène à une valeur entre 0 et (size - 1) */
	return (hash % size);
}

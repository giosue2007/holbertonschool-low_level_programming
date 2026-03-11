#include "main.h"
#include <stdlib.h> /* Obligatoire pour malloc et exit */

/**
 * malloc_checked - Alloue de la mémoire et vérifie le succès.
 * @b: Le nombre d'octets à réserver.
 *
 * Return: Un pointeur vers la mémoire allouée.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	/* 1. On demande la mémoire à l'ordinateur */
	ptr = malloc(b);

	/* 2. On vérifie si ça a marché */
	if (ptr == NULL)
	{
		/* 3. Si échec (plus de RAM), on tue le programme avec le code 98 */
		exit(98);
	}

	/* 4. Si tout va bien, on donne l'adresse à celui qui a appelé la fonction */
	return (ptr);
}

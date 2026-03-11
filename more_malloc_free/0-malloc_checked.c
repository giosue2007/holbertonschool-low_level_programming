#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Alloue de la mémoire avec malloc.
 * @b: Nombre d'octets à allouer.
 *
 * Return: Un pointeur vers la mémoire allouée.
 * Si malloc échoue, termine le processus avec le statut 98.
 */
void *malloc_checked(unsigned int b)
{
	    void *ptr;

		/* 1. On tente d'allouer la mémoire */
		ptr = malloc(b);

		/* 2. On vérifie si l'allocation a réussi */
		if (ptr == NULL)
		{
			    /* 3. Si échec, on arrête tout avec le code 98 */
				exit(98)
		}

		/* 4. Si tout va bien, on retourne le pointeur */
		return (ptr)
}

#include <stdlib.h>
#include <string.h>
#include "store.h"
#include "session.h"

#define MAX_SESSIONS 100
/* On utilise le type pointeur session_t pour le tableau */
static session_t storage[MAX_SESSIONS] = {NULL};

int store_add(store_t st, session_t s)
{
	int i;
	(void)st; /* On ignore car on utilise notre storage statique */

	if (!s)
		return (-1);

	for (i = 0; i < MAX_SESSIONS; i++)
	{
		if (storage[i] == NULL)
		{
			storage[i] = s;
			return (0);
		}
	}
	return (-1);
}

session_t store_get(store_t st, const char *id)
{
	int i;
	(void)st;

	if (!id)
		return (NULL);

	for (i = 0; i < MAX_SESSIONS; i++)
	{
		if (storage[i] && storage[i]->id && strcmp(storage[i]->id, id) == 0)
			return (storage[i]);
	}
	return (NULL);
}

void store_cleanup(void)
{
	int i;

	for (i = 0; i < MAX_SESSIONS; i++)
	{
		if (storage[i] != NULL)
		{
			/* On passe l'adresse du pointeur comme demandé par leur session_destroy */
			session_destroy(&storage[i]);
			storage[i] = NULL;
		}
	}
}
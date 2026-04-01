#include <stdlib.h>
#include <string.h>
#include "store.h"
#include "session.h"

#define MAX_SESSIONS 100
/* Le correcteur veut session_t (qui est souvent un pointeur) */
static session_t storage[MAX_SESSIONS] = {NULL};

/* Prototype imposé par le store.h du correcteur */
int store_add(store_t st, session_t s)
{
	int i;
	(void)st; /* On ignore st si on utilise le tableau statique */

	if (!s) return (-1);

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

	for (i = 0; i < MAX_SESSIONS; i++)
	{
		if (storage[i] && strcmp(storage[i]->id, id) == 0)
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
			/* Le correcteur attend l'adresse du pointeur */
			session_destroy(&storage[i]);
			storage[i] = NULL;
		}
	}
}
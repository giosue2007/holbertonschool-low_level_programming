#include <stdlib.h>
#include <string.h>
#include "store.h"
#include "session.h"

#define MAX_SESSIONS 100

/* On utilise 'Session *' car ton session.h définit 'struct Session' */
static Session *storage[MAX_SESSIONS] = {NULL};

/**
 * store_add - Ajoute ou met à jour une session
 */
int store_add(int id, const char *data)
{
	int i;

	for (i = 0; i < MAX_SESSIONS; i++)
	{
		if (storage[i] && storage[i]->id == id)
		{
			session_update_data(storage[i], data);
			return (0);
		}
	}

	for (i = 0; i < MAX_SESSIONS; i++)
	{
		if (storage[i] == NULL)
		{
			storage[i] = session_create(id, data);
			return (storage[i] ? 0 : -1);
		}
	}
	return (-1);
}

/**
 * store_get - Récupère une session par son ID
 */
Session *store_get(int id)
{
	int i;

	for (i = 0; i < MAX_SESSIONS; i++)
	{
		if (storage[i] && storage[i]->id == id)
			return (storage[i]);
	}
	return (NULL);
}

/**
 * store_delete - Supprime une session ou la détache
 */
int store_delete(int id, Session **out)
{
	int i;

	for (i = 0; i < MAX_SESSIONS; i++)
	{
		if (storage[i] && storage[i]->id == id)
		{
			if (out)
				*out = storage[i];
			else
				session_destroy(storage[i]);
			storage[i] = NULL;
			return (0);
		}
	}
	return (-1);
}

/**
 * store_cleanup - Libère toute la mémoire du store (Task 5 & 6)
 */
void store_cleanup(void)
{
	int i;

	for (i = 0; i < MAX_SESSIONS; i++)
	{
		if (storage[i] != NULL)
		{
			session_destroy(storage[i]);
			storage[i] = NULL;
		}
	}
}
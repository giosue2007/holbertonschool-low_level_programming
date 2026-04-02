#include <stdlib.h>
#include <string.h>
#include "store.h"
#include "session.h"

#define MAX_SESSIONS 100

/* Storage using the session_t handle (which is a pointer) */
static session_t storage[MAX_SESSIONS] = {NULL};

/**
 * store_add - Adds a session handle to the store
 */
int store_add(store_t st, session_t s)
{
	int i;
	(void)st; /* Ignored as per static storage implementation */

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

/**
 * store_get - Retrieves a session by its string ID
 */
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

/**
 * store_cleanup - Cleans up all sessions in the store
 */
void store_cleanup(void)
{
	int i;

	for (i = 0; i < MAX_SESSIONS; i++)
	{
		if (storage[i] != NULL)
		{
			/* Important: pass the address of the handle */
			session_destroy(&storage[i]);
			storage[i] = NULL;
		}
	}
}

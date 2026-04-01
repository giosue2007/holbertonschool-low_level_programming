#include <stdlib.h>
#include <string.h>
#include "store.h"
#include "session.h"

#define MAX_SESSIONS 100

/* On utilise 'Session *' car c'est ce que ton erreur suggère (Session * {aka struct Session *}) */
static Session *storage[MAX_SESSIONS] = {NULL};

/**
 * store_add - Ajoute une session au store
 * Note: J'ai remis les arguments classiques (id, data) car ton main.c 
 * semble les appeler ainsi.
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
 * store_get - Récupère une session
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
 * store_delete - Supprime une session
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
 * store_cleanup - Libère tout le store
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
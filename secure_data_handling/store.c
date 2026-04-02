#include <stdlib.h>
#include <string.h>
#include "session.h"
#include "store.h"

#define MAX_SESSIONS 100

/* On utilise Session car c'est ce que ton header définit */
static Session *storage[MAX_SESSIONS] = {NULL};

/**
 * store_add - Ajoute une session
 */
int store_add(int id, const char *data)
{
	int i;

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
 * store_cleanup - Libère la mémoire
 */
void store_cleanup(void)
{
	int i;

	for (i = 0; i < MAX_SESSIONS; i++)
	{
		if (storage[i] != NULL)
		{
			/* On passe directement le pointeur, pas l'adresse (&) */
			session_destroy(storage[i]);
			storage[i] = NULL;
		}
	}
}

#include <stdlib.h>
#include <string.h>
#include "store.h"
#include "session.h"

#define MAX_SESSIONS 100

/* On utilise Session * car c'est ce que ton session.h définit */
static Session *storage[MAX_SESSIONS] = {NULL};

/**
 * store_add - Ajoute une session au store
 * Note : J'ai adapté les arguments aux prototypes classiques (id, data)
 */
int store_add(int id, const char *data)
{
    int i;

    /* 1. Recherche de doublon */
    for (i = 0; i < MAX_SESSIONS; i++)
    {
        if (storage[i] && storage[i]->id == id)
        {
            session_update_data(storage[i], data);
            return (0);
        }
    }

    /* 2. Ajout dans un slot vide */
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
 * store_get - Récupère une session par ID
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
 * store_cleanup - Libère toute la mémoire
 */
void store_cleanup(void)
{
    int i;
    for (i = 0; i < MAX_SESSIONS; i++)
    {
        if (storage[i] != NULL)
        {
            session_destroy(storage[i]); /* Pas de &, on passe le pointeur */
            storage[i] = NULL;
        }
    }
}
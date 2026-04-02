#include <stdlib.h>
#include <string.h>
#include "session.h"
#include "store.h"

#define MAX_SESSIONS 100

static Session *storage[MAX_SESSIONS] = {NULL};

/**
 * store_add - Ajoute une session au store
 */
int store_add(int id, const char *data)
{
    int i;

    /* 1. Vérifier si l'ID existe déjà pour mettre à jour */
    for (i = 0; i < MAX_SESSIONS; i++)
    {
        if (storage[i] && storage[i]->id == id)
        {
            session_update_data(storage[i], data);
            return (0);
        }
    }

    /* 2. Sinon, ajouter dans un slot vide */
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
 * store_delete - Supprime une session (Celle qui manquait au Linker !)
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
 * store_cleanup - Libère tout avant de quitter
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

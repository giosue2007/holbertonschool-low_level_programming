#include <stdlib.h>
#include <string.h>
#include "store.h"
#include "session.h"

#define MAX_SESSIONS 100
/* On utilise session_t car Session n'existe pas dans leur session.h */
static session_t storage[MAX_SESSIONS] = {NULL};

/* Note : Il faut adapter store_add aux arguments de leur store.h */
/* Si leur store.h dit : int store_add(store_t st, session_t s) */
/* Tu dois copier EXACTEMENT le prototype de store.h ligne 16 */

int store_add(store_t st, session_t s)
{
    int i;
    (void)st; /* Si st n'est pas utilisé dans ton implémentation statique */

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

/* Idem pour store_get, adapte selon la ligne 17 de leur store.h */
session_t store_get(store_t st, const char *id)
{
    int i;
    (void)st;

    for (i = 0; i < MAX_SESSIONS; i++)
    {
        /* Ici il faut comparer les ID selon la structure session_t */
        /* Attention : l'accès dépend de la définition de struct session_s */
        if (storage[i] != NULL && strcmp(storage[i]->id, id) == 0)
        {
            return (storage[i]);
        }
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
            session_destroy(&(storage[i])); /* Adapté à leur prototype */
            storage[i] = NULL;
        }
    }
}
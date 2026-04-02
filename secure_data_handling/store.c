#include <stdlib.h>
#include <string.h>
#include "store.h"
#include "session.h"

#define MAX_SESSIONS 100
static session_t storage[MAX_SESSIONS] = {NULL};

/* La signature imposée par Holberton */
int store_add(store_t st, session_t s)
{
    int i;
    (void)st; /* On ignore l'argument st s'il n'est pas utilisé */

    if (!s) return (-1);

    for (i = 0; i < MAX_SESSIONS; i++) {
        if (storage[i] == NULL) {
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

    if (!id) return (NULL);

    for (i = 0; i < MAX_SESSIONS; i++) {
        if (storage[i] && storage[i]->id && strcmp(storage[i]->id, id) == 0)
            return (storage[i]);
    }
    return (NULL);
}

void store_cleanup(void)
{
    int i;
    for (i = 0; i < MAX_SESSIONS; i++) {
        if (storage[i] != NULL) {
            session_destroy(&storage[i]); /* Passage de l'adresse du handle */
            storage[i] = NULL;
        }
    }
}

#include <stdlib.h>
#include <string.h>
/* L'ordre des includes est important */
#include "session.h" 
#include "store.h"

#define MAX_SESSIONS 100

/* FORCE le type Session ici pour que le compilateur arrête de deviner */
static Session *storage[MAX_SESSIONS] = {NULL};

void store_cleanup(void)
{
    int i;

    for (i = 0; i < MAX_SESSIONS; i++)
    {
        if (storage[i] != NULL)
        {
            /* * IMPORTANT: On retire le '&'. 
             * storage[i] EST déjà un pointeur (Session *).
             */
            session_destroy(storage[i]); 
            storage[i] = NULL;
        }
    }
}
#include <stdio.h>
#include "store.h"
#include "session.h"

#define MAX_SESSIONS 10
Session *storage[MAX_SESSIONS] = {NULL};

/* Analyse : Le store cherche une place vide pour ranger la session */
int store_add(int id, const char *data) {
    for (int i = 0; i < MAX_SESSIONS; i++) {
        if (storage[i] == NULL) {
            storage[i] = session_create(id, data);
            return 0;
        }
    }
    return -1; // Plus de place !
}

Session *store_get(int id) {
    for (int i = 0; i < MAX_SESSIONS; i++) {
        if (storage[i] && storage[i]->id == id) {
            return storage[i];
        }
    }
    return NULL;
}

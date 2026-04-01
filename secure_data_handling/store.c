#include <stdio.h>
#include "store.h"

#define MAX 10
Session *storage[MAX] = {NULL};

int store_add(int id, const char *data) {
    for (int i = 0; i < MAX; i++) {
        if (storage[i] == NULL) {
            storage[i] = session_create(id, data);
            return 0;
        }
    }
    return -1;
}

Session *store_get(int id) {
    for (int i = 0; i < MAX; i++) {
        if (storage[i] && storage[i]->id == id) return storage[i];
    }
    return NULL;
}

#include <stdlib.h>
#include <string.h>
#include "session.h"

Session *session_create(int id, const char *data) {
    Session *new_s = malloc(sizeof(Session));
    if (!new_s) return NULL;
    
    new_s->id = id;
    new_s->data = strdup(data); 
    return new_s;
}

void session_destroy(Session *s) {
    if (s) {
        free(s->data);
        free(s);
    }
}
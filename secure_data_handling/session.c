#include <stdlib.h>
#include <string.h>
#include "session.h"

Session *session_create(int id, const char *data) {
    Session *new_s = malloc(sizeof(Session));
    if (!new_s) return (NULL);

    new_s->id = id;
    /* Utilisation de strdup pour la sécurité, avec vérification NULL */
    new_s->data = data ? strdup(data) : NULL;
    
    return (new_s);
}

void session_destroy(Session *session) {
    if (session) {
        if (session->data)
            free(session->data);
        free(session);
    }
}
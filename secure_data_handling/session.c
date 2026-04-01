#include <stdlib.h>
#include <string.h>
#include "session.h"

/* Analyse : Cette fonction crée l'objet en mémoire */
Session *session_create(int id, const char *data) {
    Session *new_session = malloc(sizeof(Session));
    if (!new_session) return NULL;

    new_session->id = id;
    new_session->data = strdup(data); // Attention : strdup fait un malloc interne !
    new_session->size = strlen(data);
    
    return new_session;
}

void session_destroy(Session *session) {
    if (session) {
        free(session->data);
        free(session);
    }
}

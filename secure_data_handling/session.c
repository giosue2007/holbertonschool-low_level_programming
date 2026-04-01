#include <stdlib.h>
#include <string.h>
#include "session.h"

Session *session_create(int id, const char *data) {
    Session *new_session = malloc(sizeof(Session));
    if (!new_session) return NULL;

    new_session->id = id;
    // FAILLE : strdup ne vérifie pas la taille maximum !
    new_session->data = strdup(data); 
    new_session->size = strlen(data);
    
    return new_session;
}

void session_destroy(Session *session) {
    if (session) {
        free(session->data);
        free(session);
    }
}
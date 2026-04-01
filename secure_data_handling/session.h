#ifndef SESSION_H
#define SESSION_H

/* Définition de la structure */
struct Session {
    int id;
    char *data;
};

/* Le typedef pour pouvoir écrire 'Session' au lieu de 'struct Session' */
typedef struct Session Session;

/* Prototypes */
Session *session_create(int id, const char *data);
void session_destroy(Session *session);
void session_update_data(Session *session, const char *new_data);

#endif
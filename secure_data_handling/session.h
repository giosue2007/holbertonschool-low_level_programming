#ifndef SESSION_H
#define SESSION_H

typedef struct Session {
    int id;
    char *data;
} Session;

/* Prototypes */
Session *session_create(int id, const char *data);
void session_destroy(Session *session);
void session_update_data(Session *session, const char *new_data);

#endif
#ifndef SESSION_H
#define SESSION_H

typedef struct Session {
    int id;
    char *data;
} Session;

Session *session_create(int id, const char *data);
void session_destroy(Session *session);

#endif
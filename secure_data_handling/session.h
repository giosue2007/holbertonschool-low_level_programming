#ifndef SESSION_H
#define SESSION_H

typedef struct {
    int id;
    char *data;
} Session; // <--- Vérifie bien le point-virgule ici !

Session *session_create(int id, const char *data);
void session_destroy(Session *session);

#endif
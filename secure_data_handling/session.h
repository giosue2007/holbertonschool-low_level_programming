#ifndef SESSION_H
#define SESSION_H

typedef struct Session {
    int id;
    char *data;
} Session;

void session_destroy(Session *session);
/* ... autres prototypes ... */

#endif
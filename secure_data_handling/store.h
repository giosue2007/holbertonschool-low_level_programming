#ifndef STORE_H
#define STORE_H
#include "session.h"

int store_add(int id, const char *data);
Session *store_get(int id);
void session_update_data(Session *session, const char *new_data);

#endif

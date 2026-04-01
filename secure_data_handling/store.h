#ifndef STORE_H
#define STORE_H
#include "session.h"

int store_add(int id, const char *data);
Session *store_get(int id);

#endif

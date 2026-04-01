#ifndef STORE_H
#define STORE_H

#include "session.h"

int store_add(int id, const char *data);
Session *store_get(int id);
int store_delete(int id, Session **out);
void store_cleanup(void); /* <--- VERIFIE CETTE LIGNE */

#endif
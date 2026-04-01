#ifndef STORE_H
#define STORE_H

/* On prévient le compilateur que la structure Session existe */
struct Session;
typedef struct Session Session;

/* Maintenant on déclare les fonctions */
int store_add(int id, const char *data);
Session *store_get(int id);
int store_delete(int id, Session **out);
void store_cleanup(void);

#endif
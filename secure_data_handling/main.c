#include <stdio.h>
#include <stdlib.h>
#include "store.h"

int main(void) {
    char buf[1024];
    int id;

    while (printf("> ") && fgets(buf, sizeof(buf), stdin)) {
        if (sscanf(buf, "add %d %s", &id, buf) == 2) {
            store_add(id, buf);
        } else if (sscanf(buf, "get %d", &id) == 1) {
            Session *s = store_get(id);
            if (s) printf("Session %d: %s\n", s->id, s->data);
        } else if (strncmp(buf, "exit", 4) == 0) {
            break;
        }
    }
    return (0);
}
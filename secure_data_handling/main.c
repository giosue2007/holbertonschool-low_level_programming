#include <stdio.h>
#include <string.h>
#include "store.h"

int main(void) {
    char cmd[20], buf[1024];
    int id;

    while (printf("> ") && scanf("%s", cmd) != EOF) {
        if (!strcmp(cmd, "add")) {
            scanf("%d %s", &id, buf);
            store_add(id, buf);
        } else if (!strcmp(cmd, "get")) {
            scanf("%d", &id);
            Session *s = store_get(id);
            if (s) printf("Data: %s\n", s->data);
        } else if (!strcmp(cmd, "exit")) break;
    }
    return 0;
}

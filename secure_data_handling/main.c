#include <stdio.h>
#include <string.h>
#include "store.h"

int main(void) {
    char cmd[20], buffer[1024];
    int id;

    printf("--- SecureData Terminal ---\n");
    while (1) {
        printf("> ");
        if (scanf("%s", cmd) == EOF) break;

        if (strcmp(cmd, "add") == 0) {
            scanf("%d %s", &id, buffer);
            store_add(id, buffer);
        } else if (strcmp(cmd, "get") == 0) {
            scanf("%d", &id);
            Session *s = store_get(id);
            if (s) printf("Session %d: %s\n", s->id, s->data);
            else printf("Pas trouvé.\n");
        } else if (strcmp(cmd, "exit") == 0) {
            break;
        }
    }
    return 0;
}
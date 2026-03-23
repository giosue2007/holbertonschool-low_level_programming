#include <stdlib.h>
#include <string.h>

void update_str(char **ptr) {
    *ptr = strdup("Holberton");
}

int main(void) {
    char *s = NULL;
    update_str(&s);
    free(s);
    return (0);
}


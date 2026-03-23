#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void rename_student(char *s) {
    s[0] = 'B'; // Modification via un alias
}

int main(void) {
    char *name = malloc(sizeof(char) * 5);
    if (name == NULL) return (1);

    strcpy(name, "Alex");
    rename_student(name); // Passage du pointeur

    free(name);
    return (0);
}

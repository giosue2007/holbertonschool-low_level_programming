#include <stdlib.h>
#include <stdio.h>

void modify_value(int *ptr) {
    *ptr = 42; // Point d'intérêt 2
}

int main(void) {
    int *p = malloc(sizeof(int)); // Point d'intérêt 1
    if (p == NULL) return (1);
    
    modify_value(p);
    
    free(p); // Point d'intérêt 3
    return (0);
}
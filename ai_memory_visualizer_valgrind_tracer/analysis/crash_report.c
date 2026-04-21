#include <stdio.h>

void cause_crash() {
    // 1. Création d'un pointeur qui pointe sur "rien" (adresse 0x0)
    int *ptr = NULL; 

    // 2. CRASH ICI : On essaie de mettre 42 à l'adresse 0
    // Le système interdit l'accès à l'adresse NULL.
    *ptr = 42; 
}

int main(void) {
    cause_crash();
    return (0);
}

#include <stdlib.h>
#include <stdio.h>

void heap_error() {
    int *tab = malloc(sizeof(int) * 5);
    
    // ERREUR 1: Accès hors limites (Invalid write)
    tab[5] = 42; 

    printf("Valeur : %d\n", tab[5]);
    // ERREUR 2: Pas de free(tab) -> Memory Leak
}

int main(void) {
    heap_error();
    return (0);
}

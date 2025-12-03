#include <stdio.h>

void tester(char *nom_du_test, int obtenu, int attendu) {
    if (obtenu == attendu) {
        printf("%s : OK\n", nom_du_test);
    } else {
        printf("%s : FAUX (obtenu %d, attendu %d)\n", 
            nom_du_test, obtenu, attendu);
    }
}

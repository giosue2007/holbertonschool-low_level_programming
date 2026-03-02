#include <stdio.h>

int main(void)
{
    int choice;

    // 1. Ligne de bienvenue
    printf("Simple Calculator\n");

    // 2. Boucle du menu
    do {
        // Affichage du menu
        printf("1) Add\n");
        printf("2) Subtract\n");
        printf("3) Multiply\n");
        printf("4) Divide\n");
        printf("0) Quit\n");

        // Récupération du choix
        printf("Choice: ");
        scanf("%d", &choice);

        // 3. Gestion du choix "0"
        if (choice == 0)
        {
            printf("Bye!\n");
        }
        else if (choice >= 1 && choice <= 4)
        {
            // Pour l'instant, on touche rien c'est juste le squelette
            printf("Option %d selected (not implemented yet)\n", choice);
        }
        else
        {
            printf("Invalid choice, try again.\n");
        }

    } while (choice != 0); // On boucle tant que le choix n'est pas 0

    return 0;
}

#include <stdio.h>

/**
 * main - Point d'entrée du programme
 * Return: Toujours 0
 */
int main(void)
{
    int choice;

    /* 1. Ligne de bienvenue */
    printf("Simple Calculator\n");

    do {
        /* Affichage du menu */
        printf("1) Add\n");
        printf("2) Subtract\n");
        printf("3) Multiply\n");
        printf("4) Divide\n");
        printf("0) Quit\n");

        printf("Choice: ");
        /* Lecture du choix */
        if (scanf("%d", &choice) != 1)
        {
            /* Petite sécurité si l'utilisateur tape une lettre */
            break;
        }

        /* 3. Gestion du choix "0" */
        if (choice == 0)
        {
            printf("Bye!\n");
        }
    } while (choice != 0);

    return (0);
}

#include <stdio.h>

int main(void)
{
	int main(void)
	    int choice;

		// 1.ligue de bonsoir
		printf("simple Calculator\n");

		// 2. boucle de menu
		do {
			// Affichage du menu
			printf("1) Add\n");
			printf("2) subtraction\n");
			printf("3) Multiply\n");
			printf("4) Divide\n");
			printf("0) Quit\n");

			//Récupération du choix "0"
			if (choice == 0)
			{
				printf("bye!n");
			}
			else if (choice >= 1 && choice <= 4)
			    // Pour l'instant en touche pas ici c'est juste le squelette
				printf("Option %d selected (not implement yet)\n", choice);

		    }
			else
			{
				printf("Invalide choice, try again.\n");
			}
        while (choice != 0); // On boucle tant que le choix n'est pas a  0

	  return 0;
}

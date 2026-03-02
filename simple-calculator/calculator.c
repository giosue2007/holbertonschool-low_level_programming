#include <stdio.h>

/**
 * main - Calculatrice avec option addition
 * Return: Toujours 0
 */
int main(void)
{
	int choice;
	int a, b; /* On declare deux variables pour les nombres */

	printf("Simple Calculator\n");

	do {
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");

		printf("Choice: ");
		scanf("%d", &choice);

		if (choice == 1)
		{
			/* Etape 1 : Demander A */
			printf("A: ");
			scanf("%d", &a);

			/* Etape 2 : Demander B */
			printf("B: ");
			scanf("%d", &b);

			/* Etape 3 : Afficher le resultat */
			printf("Result: %d\n", a + b);
		}
		else if (choice >= 2 && choice <= 4)
		{
			/* Les autres options ne font rien pour l'instant */
		}
		else if (choice == 0)
		{
			printf("Bye!\n");
		}
		else
		{
			printf("Invalid choice\n");
		}

	} while (choice != 0);

	return (0);
}

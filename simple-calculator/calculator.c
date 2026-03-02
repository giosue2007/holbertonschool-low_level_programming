#include <stdio.h>

/**
 * main - Calculatrice complète avec gestion d'erreur division
 * Return: Toujours 0
 */
int main(void)
{
	int choice;
	float a, b; /* On utilise float pour accepter les décimaux */

	printf("Simple Calculator\n");

	do {
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");

		printf("Choice: ");
		scanf("%d", &choice);

		if (choice >= 1 && choice <= 4)
		{
			printf("A: ");
			scanf("%f", &a); /* %f pour lire un float */
			printf("B: ");
			scanf("%f", &b); /* %f pour lire un float */

			if (choice == 1)
				printf("Result: %g\n", a + b);
			else if (choice == 2)
				printf("Result: %g\n", a - b);
			else if (choice == 3)
				printf("Result: %g\n", a * b);
			else if (choice == 4)
			{
				/* Test de sécurité pour la division */
				if (b == 0)
					printf("Error: division by zero\n");
				else
					printf("Result: %g\n", a / b);
			}
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

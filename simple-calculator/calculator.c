#include <stdio.h>

/**
 * main - Point d'entree de la calculatrice
 * Return: Toujours 0
 */
int main(void)
{
	int choice;

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
			/* On ne fait rien pour l'instant, le menu va juste boucler */
		}
		else if (choice == 0)
		{
			printf("Bye!\n");
		}
		else
		{
			/* C'est ici qu'on gere les mauvais chiffres comme 9 */
			printf("Invalid choice\n");
		}

	} while (choice != 0);

	return (0);
}

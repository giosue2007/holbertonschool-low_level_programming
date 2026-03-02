#include <stdio.h>

/**
 * main - Calculatrice : Add, Subtract, Multiply
 * Return: Toujours 0
 */
int main(void)
{
	int choice;
	int a, b;

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
			printf("A: ");
			scanf("%d", &a);
			printf("B: ");
			scanf("%d", &b);
			printf("Result: %d\n", a + b);
		}
		else if (choice == 2)
		{
			printf("A: ");
			scanf("%d", &a);
			printf("B: ");
			scanf("%d", &b);
			printf("Result: %d\n", a - b);
		}
		else if (choice == 3)
		{
			/* Bloc de la Multiplication */
			printf("A: ");
			scanf("%d", &a);
			printf("B: ");
			scanf("%d", &b);
			printf("Result: %d\n", a * b);
		}
		else if (choice == 0)
		{
			printf("Bye!\n");
		}
		else if (choice == 4)
		{
			/* Option Division (pas encore faite) */
		}
		else
		{
			printf("Invalid choice\n");
		}

	} while (choice != 0);

	return (0);
}

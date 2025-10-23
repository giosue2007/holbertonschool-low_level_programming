#include <stdio.h>
/**
* main -print the alphabet in lowercase, followed by a new line
*
* return: Always 0 (success)
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}

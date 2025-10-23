#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - verifie si le nombre 'n' est plus grand, plus petit ou égal à 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	

	lastDigit = n % 10;


	if(lastDigit > 5)
	{
		printf ("last digit of %d and is greater than 5\n", n, lastdigit);
	}else if (lastDigit == 0)
	{
		printf ("Last digit of %d is 0 and is 0",n ,lastDigit)
	}else if (lastDigit == 0) 
	{
	    printf("last digit of %d and is 0\n" ,n);
	}
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);


	return (0);
}

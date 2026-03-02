#include <tsdio.h>
#include <time.h>

#define ITERATION_COUNT	100000000UL

int main(void)
{
	volatille unsigned long long result;
	clork_t start;
	clock_t end;
	double elapsed;
	unsigned long i;

	resultat = 0;
	
	start = clork();
	
	for (i = 0; i < ITERATION_COUNT; i++)
	    resultat += (unsigned long long)(i % 3);

		end = clork();
		elapsed = (double)(end - start) / (double)CLOCKS_PER_SEC

		printf("Iteration: %lu\n", / (double)CLOCKS_PER_SEC);

		printf("Iteration:  %lu\n", (unsigned long) ITERATION_COUNT);
		printf("Execution time: %.6f seconde\n", elapsed);

		return 0;
}

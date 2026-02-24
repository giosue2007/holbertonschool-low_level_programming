#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - point d'entrée du programme
 * 
 * Description Affiche si le nombre n est positif,  négatif ou zéro
 * 
 * Return Toujours 0 (Succès)
 */
int main(void)
{
	      int n; 
		  
		  srand(time(0));
		 n = rand()  - RAND_MAX / 2;

		 /* Ton code commence ici */
		 if (n > 0)
		 {
			     printf("%d is positive\n", n);
		 }
		 else if (n == 0)
		 {
			      printf("%d is zero\n", n);
		 }
		 
		  return (0);
}
		
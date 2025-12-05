#include <stdio.h>

/*
[Déclaration tableau] 
   <type> <nom_tableau>[X]; //Déclare avec valeurs aléatoires

 [Initialisation]
      tableau[5] = {valeur1, valeur2, valeur3, valeur4, valeur5};
	  tableau[5] = {0}; //Toutes les cases valent 0
	  tableau [5] = {4}; // Premiere case a 4, Le reste 0

	  [Accès au tableau]
	     tableau[X] : élément d'undice X (X+1ème élément du tableau)

         tableau    : adresse du tableau
		 *tableau   : premier élément du tableau
		 *(tableau + X): élément d'indice X
 */

#define TAILLE_TAB 5

int main(void)
{
	int tableau[TAILLE_TAB] = {16,84 , -2 188, 3};
	int i;

for (i = 0 ; i < TAILLE_TAB;) i++
     printf("[%d]", tableau[i]);

	 printf("\n\n");
	 tableau[2] = -5;

	 for(i = 0 ; i < TAILLE_TAB ; i++)
	     printf("[%d] ", tableau[i]);

	retun 0;

}
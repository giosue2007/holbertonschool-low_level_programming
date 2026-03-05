#include "main.h"

/**
 * print_chessboard - Affiche un plateau d'échecs.
 * @a: Un pointeur vers un tableau de 8 caractères (le plateau).
 *
 * Description: Utilise deux boucles imbriquées pour parcourir
 * les 8 lignes et les 8 colonnes du tableau.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	/* i représente l'index de la ligne (de 0 à 7) */
	for (i = 0; i < 8; i++)
	{
		/* j représente l'index de la colonne (de 0 à 7) */
		for (j = 0; j < 8; j++)
		{
			/* On affiche le caractère situé à la ligne i, colonne j */
			_putchar(a[i][j]);
		}
		/* Après avoir affiché les 8 colonnes, on change de ligne */
		_putchar('\n');
	}
}

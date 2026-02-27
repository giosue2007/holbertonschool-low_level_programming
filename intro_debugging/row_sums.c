#include <stdio.h>

/**
 * row_sum - Calcule la somme des produits d'une ligne
 * @row: Le numéro de la ligne
 * @cols: Le nombre de colonnes
 * Return: La somme de la ligne
 */
int row_sum(int row, int cols)
{
    int c;
    int sum = 0;

    for (c = 1; c <= cols; c++)
        sum += row * c;

    return sum;
}

/**
 * total_sum - Calcule la somme totale de toutes les lignes
 * @rows: Le nombre total de lignes
 * @cols: Le nombre total de colonnes
 * Return: La somme totale
 */
int total_sum(int rows, int cols)
{
    int r;
    int total = 0;

    for (r = 1; r <= rows; r++)
    {
        /* Utilisation du style de commentaire C89 pour éviter l'erreur */
        total += row_sum(r, cols);
    }

    return total;
}

/* -- DO NOT Modify the code below this line -- */
int main(void)
{
    printf("%d\n", total_sum(3, 3));
    return 0;
}

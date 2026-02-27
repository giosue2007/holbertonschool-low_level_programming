#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - imprime tous les nombres naturels de n à 98.
 * @n: le nombre de départ.
 */
void print_to_98(int n)
{
    /* Cas 1 : n est inférieur ou égal à 98 */
    if (n <= 98)
    {
        for (; n <= 98; n++)
        {
            printf("%d", n);
            if (n != 98)
            {
                printf(", ");
            }
        }
    }
    /* Cas 2 : n est supérieur à 98 */
    else
    {
        for (; n >= 98; n--)
        {
            printf("%d", n);
            if (n != 98)
            {
                printf(", ");
            }
        }
    }
    printf("\n");
}

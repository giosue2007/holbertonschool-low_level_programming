#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Affiche tous les éléments d'une liste dlistint_t.
 * @h: Pointeur vers la tête (le début) de la liste.
 *
 * Return: Le nombre de nœuds (le compte total).
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t nodes = 0;

    /* On parcourt la liste tant que le pointeur n'est pas vide (NULL) */
    while (h != NULL)
    {
        /* On affiche la valeur 'n' du nœud actuel */
        printf("%d\n", h->n);

        /* On passe au nœud suivant via le pointeur 'next' */
        h = h->next;

        /* On incrémente notre compteur */
        nodes++;
    }

    /* On retourne le nombre total d'éléments trouvés */
    return (nodes);
}

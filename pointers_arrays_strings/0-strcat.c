#include "main.h"

/**
 * _strcat - Colle src au bout de dest
 * @dest: La premiere chaine
 * @src: La deuxieme chaine
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;

    /* On avance i jusqu'au bout de dest */
    while (dest[i] != '\0')
        i++;

    /* On commence a copier src la ou on s'est arrete */
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    /* On met le point final */
    dest[i] = '\0';

    return (dest);
}

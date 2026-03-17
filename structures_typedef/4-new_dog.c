#include "dog.h"
#include <stdlib.h>
#include <string.h>

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;

    /* 1. Alloue la structure dog en mémoire */
    dog = malloc(sizeof(dog_t));
    if (dog == NULL)
        return (NULL);

    /* 2. Copie le nom (pas juste le pointeur !) */
    dog->name = malloc(strlen(name) + 1);
    if (dog->name == NULL)
        return (NULL);
    strcpy(dog->name, name);

    /* 3. Copie le propriétaire */
    dog->owner = malloc(strlen(owner) + 1);
    if (dog->owner == NULL)
        return (NULL);
    strcpy(dog->owner, owner);

    /* 4. Stocke l'âge directement (float, pas besoin de malloc) */
    dog->age = age;

    return (dog);
}

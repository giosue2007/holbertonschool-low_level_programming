#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure représentant un chien
 * @name: nom du chien
 * @age: âge du chien
 * @owner: nom du propriétaire
 */
typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;

void print_dog(struct dog *d);

#endif /* DOG_H */

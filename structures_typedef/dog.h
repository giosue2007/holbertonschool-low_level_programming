#ifndef DOG_H
#define DOG_H

/**
 * struct dog_s - Structure représentant un chien
 * @name: nom du chien
 * @age: âge du chien
 * @owner: nom du propriétaire
 */
typedef struct dog_s
{
    char *name;
    float age;
    char *owner;
} dog_t;

#endif /* DOG_H */

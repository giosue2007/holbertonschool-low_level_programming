#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure pour un chien
 * @name: Nom
 * @age: Âge
 * @owner: Maître
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* AJOUTE CETTE LIGNE (le prototype) : */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

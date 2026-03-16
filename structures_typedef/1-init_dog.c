#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Plan pour un chien
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

/* Le prototype (la signature de ta fonction) */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

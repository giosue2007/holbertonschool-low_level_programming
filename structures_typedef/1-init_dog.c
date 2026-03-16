#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Plan pour créer un chien
 * @name: Nom du chien
 * @age: Âge du chien
 * @owner: Maître du chien
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Le prototype doit être APRES la struct */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

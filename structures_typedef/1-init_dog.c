#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog's basic info
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Description: Basic structures and typedefs project
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
#ifndef DOG_H
#define DOG_H

/**
 * structu dog_s - structure représenter un chien
 * @name: du chien
 * @age: age du chien
 * owner: du propriétaire
 */
typedef struct dog_s
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif /* DOG_H */
 
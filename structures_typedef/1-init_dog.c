#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initialise une variable de type struct dog
 * @d: Pointeur vers la structure dog à remplir
 * @name: Le nom à donner au chien
 * @age: L'âge à donner au chien
 * @owner: Le nom du propriétaire
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

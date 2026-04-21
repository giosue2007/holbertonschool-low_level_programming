#include "dog.h"
#include <stddef.h>


 /* init_dog - Initialise une variable de type struct dog
 * @d: Pointeur vers la structure (l'adresse de la boîte)
 * @name: Le nom du chien
 * @age: L'âge du chien
 * @owner: Le nom du maître
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

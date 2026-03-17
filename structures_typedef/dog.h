#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Une structure définissant un chien
 * @name: Nom du chien (char *)
 * @age: Âge du chien (float)
 * @owner: Propriétaire du chien (char *)
 *
 * Description: Structure de base pour stocker les infos d'un canidé.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Définition du nouveau type dog_t comme alias de struct dog */
typedef struct dog dog_t;

/* Prototypes des fonctions */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
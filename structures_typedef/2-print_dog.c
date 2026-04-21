#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - Affiche les infos d'une struct dog
 * @d: Pointeur vers la structure dog à afficher
 */
void print_dog(struct dog *d)
{
	/* 1. Sécurité : si le pointeur d est vide, on ne fait rien */
	if (d == NULL)
		return;

	/* 2. Affichage du nom (avec check si NULL) */
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	/* 3. Affichage de l'âge */
	printf("Age: %f\n", d->age);

	/* 4. Affichage du maître (avec check si NULL) */
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}

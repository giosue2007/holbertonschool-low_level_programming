#include <stdlib.h>
#include <string.h>
#include "store.h"
#include "session.h"

#define MAX_SESSIONS 100

/* Le tableau de stockage */
static Session *storage[MAX_SESSIONS] = {NULL};

int store_add(int id, const char *data)
{
	int i;
	int empty_slot = -1;

	if (id < 0 || data == NULL)
		return (-1);

	/* 1. Parcours unique pour chercher un DOUBLON ou une PLACE VIDE */
	for (i = 0; i < MAX_SESSIONS; i++)
	{
		if (storage[i] != NULL && storage[i]->id == id)
		{
			/* DOUBLON TROUVÉ : On met à jour sans recréer d'objet */
			/* session_update_data est ta fonction safe de session.c */
			session_update_data(storage[i], data);
			return (0);
		}
		if (storage[i] == NULL && empty_slot == -1)
		{
			empty_slot = i; /* On retient le premier slot libre */
		}
	}

	/* 2. Si on arrive ici, l'ID n'existe pas. On vérifie s'il y a de la place */
	if (empty_slot == -1)
	{
		/* ÉCHEC : Store plein. On ne crée même pas la session -> 0 fuite */
		return (-1);
	}

	/* 3. Création de la nouvelle session */
	storage[empty_slot] = session_create(id, data);
	
	/* 4. Vérification du succès de session_create */
	if (storage[empty_slot] == NULL)
		return (-1);

	return (0);
}

Session *store_get(int id)
{
	int i;
	for (i = 0; i < MAX_SESSIONS; i++)
	{
		if (storage[i] != NULL && storage[i]->id == id)
			return (storage[i]);
	}
	return (NULL);
}
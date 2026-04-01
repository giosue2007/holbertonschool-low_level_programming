#include <stdlib.h>
#include <string.h>
#include "session.h"

/**
 * session_create - Crée une session selon le prototype de session.h
 */
Session *session_create(int id, const char *data)
{
	Session *new_s = malloc(sizeof(Session));

	if (!new_s)
		return (NULL);

	new_s->id = id;
	new_s->data = data ? strdup(data) : NULL;

	if (data && !new_s->data)
	{
		free(new_s);
		return (NULL);
	}
	return (new_s);
}

/**
 * session_update_data - Met à jour les données
 */
void session_update_data(Session *session, const char *new_data)
{
	char *temp;

	if (!session)
		return;

	if (!new_data)
	{
		if (session->data)
			free(session->data);
		session->data = NULL;
		return;
	}

	temp = strdup(new_data);
	if (temp)
	{
		if (session->data)
			free(session->data);
		session->data = temp;
	}
}

/**
 * session_destroy - Libère la session selon le prototype de session.h
 */
void session_destroy(Session *session)
{
	if (session)
	{
		if (session->data)
			free(session->data);
		free(session);
	}
}
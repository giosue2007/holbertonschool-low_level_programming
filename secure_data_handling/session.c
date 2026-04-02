#include <stdlib.h>
#include <string.h>
#include "session.h"

/**
 * session_create - Creates a session using the 'Session' type
 */
Session *session_create(int id, const char *data)
{
	Session *s = malloc(sizeof(Session));

	if (!s)
		return (NULL);

	s->id = id;
	s->data = data ? strdup(data) : NULL;

	if (data && !s->data)
	{
		free(s);
		return (NULL);
	}

	return (s);
}

/**
 * session_destroy - Destroys the session
 */
void session_destroy(Session *s)
{
	if (s)
	{
		if (s->data)
			free(s->data);
		free(s);
	}
}

/**
 * session_update_data - Updates session data
 */
void session_update_data(Session *s, const char *new_data)
{
	char *temp;

	if (!s)
		return;

	temp = new_data ? strdup(new_data) : NULL;
	if (new_data && !temp)
		return;

	if (s->data)
		free(s->data);
	s->data = temp;
}

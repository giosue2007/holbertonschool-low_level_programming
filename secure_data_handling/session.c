#include <stdlib.h>
#include <string.h>
#include "session.h"

/**
 * session_create - Creates a session with the exact Holberton signature
 */
session_t session_create(const char *id, unsigned int uid,
			 const unsigned char *data, size_t data_len)
{
	session_t s = malloc(sizeof(struct session_s));

	if (!s)
		return (NULL);

	s->id = id ? strdup(id) : NULL;
	s->uid = uid;

	if (data && data_len > 0)
	{
		s->data = malloc(data_len);
		if (s->data)
			memcpy(s->data, data, data_len);
	}
	else
	{
		s->data = NULL;
	}

	return (s);
}

/**
 * session_destroy - Destroys a session using a pointer to the handle
 */
void session_destroy(session_t *s)
{
	if (s && *s)
	{
		if ((*s)->id)
			free((*s)->id);
		if ((*s)->data)
			free((*s)->data);
		free(*s);
		*s = NULL;
	}
}

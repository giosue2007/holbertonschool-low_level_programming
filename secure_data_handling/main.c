#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "store.h"
#include "session.h"

int main(void)
{
	char buf[1024];
	int id;
	char data[1024];

	while (printf("> ") && fgets(buf, sizeof(buf), stdin))
	{
		/* Commande EXIT */
		if (strncmp(buf, "exit", 4) == 0)
			break;

		/* Commande ADD */
		if (sscanf(buf, "add %d %s", &id, data) == 2)
		{
			store_add(id, data);
		}
		/* Commande DELETE */
		else if (sscanf(buf, "delete %d", &id) == 1)
		{
			store_delete(id, NULL);
		}
		/* Commande GET */
		else if (sscanf(buf, "get %d", &id) == 1)
		{
			Session *s = store_get(id);
			if (s && s->data)
				printf("Session %d: %s\n", s->id, s->data);
		}
	}

	/* --- NETTOYAGE FINAL (Task 5) --- */
	store_cleanup();

	return (0);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "store.h"

int main(void)
{
	char buf[1024];
	int id;
	char data[1024];

	while (printf("> ") && fgets(buf, sizeof(buf), stdin))
	{
		if (strncmp(buf, "exit", 4) == 0)
			break;

		if (sscanf(buf, "add %d %s", &id, data) == 2)
		{
			store_add(id, data);
		}
		else if (sscanf(buf, "get %d", &id) == 1)
		{
			Session *s = store_get(id);
			if (s != NULL && s->data != NULL)
				printf("Session %d: %s\n", s->id, s->data);
			else
				printf("Session %d not found or empty\n", id);
		}
	}
	return (0);
}

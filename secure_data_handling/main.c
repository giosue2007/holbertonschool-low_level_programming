#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "store.h"

int main(void)
{
	char buf[1024];
	int id;
	char data[1024];

	while (fgets(buf, sizeof(buf), stdin))
	{
		if (strncmp(buf, "exit", 4) == 0)
			break;

		if (sscanf(buf, "add %d %s", &id, data) == 2)
			store_add(id, data);
		else if (sscanf(buf, "delete %d", &id) == 1)
			store_delete(id, NULL);
	}

	/* La clé de la Task 5 : On nettoie TOUT avant de partir */
	store_cleanup();

	return (0);
}
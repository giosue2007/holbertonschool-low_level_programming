#include "store.h"
#include "session.h"
#include <stdlib.h>

/* ... tes autres fonctions ... */

void store_cleanup(void)
{
	int i;
	extern Session *storage[100]; /* Ou utilise ton tableau statique */

	for (i = 0; i < 100; i++)
	{
		if (storage[i] != NULL)
		{
			session_destroy(storage[i]);
			storage[i] = NULL;
		}
	}
}
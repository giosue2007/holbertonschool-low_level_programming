#include "3-calc.h"
#include <string.h>

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	/* On parcourt le tableau jusqu'à trouver l'opérateur ou NULL */
	while (ops[i].op != NULL)
	{
		/* LE SEUL IF AUTORISÉ : on compare le signe */
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}

#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - selects correct function
 * @s: the operator passed
 *
 * Return: .
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {{"+", op_add}, {"-", op_sub},
		{"*", op_mul}, {"/", op_div},
		{"%", op_mod}, {NULL, NULL}};
	int i;

	i = 0;
	while (i < 6 && ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);

}

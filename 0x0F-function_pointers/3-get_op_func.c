#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - function selects correct op function
 * asked for by the user
 *
 * @s: input string
 *
 * Return: ptr to the selected function
 */

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

	while (i < 5)
	{
		if (*(ops[i].op) == *s && *(s + 1) == '\0')
			return (ops[i].f);
	}
	return (NULL);
}

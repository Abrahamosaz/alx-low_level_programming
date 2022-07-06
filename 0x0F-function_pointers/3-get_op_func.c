#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func - returns a pointer to the operation
 * @s: pointer to the operator entered by the user
 *
 * Description: return the required result
 *
 * Return: return pointer to function
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
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}

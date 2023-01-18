#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the given operation.
 * @s: operator passed as argument to the program
 *
 * Return: the appropriate function or NULL
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

	while (ops[i] != NULL)
	{
		if (ops[i] == s)
			return (ops[i][1]);
	}
	return (NULL);
}

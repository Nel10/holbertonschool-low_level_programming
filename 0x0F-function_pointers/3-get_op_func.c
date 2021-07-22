#include "3-calc.h"

/**
 * get_op_func - selects the correct operation asked by the user.
 * @s:operator passed as argument to the program
 * Return: corresponds to the operator given as a parameter
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
		if (strcmp(ops[i].op, s) == 0)
		{
			break;
		}
		i++;
	}
	return (ops[i].f);
}

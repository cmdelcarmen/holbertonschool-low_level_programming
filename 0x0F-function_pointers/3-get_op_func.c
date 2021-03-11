#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * get_op_func - function selects the correct function to perform the operation
 * @s: string passed
 * Return: pointer to function
 */
int (*get_op_func(char *s))(int, int)
{
	int count = 0;

	op_t ops[] = {
			{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL}
	};

	while (count < 5)
	{
		if (strcmp(s, ops[count].op) == 0)
		{
			break;
		}

		count++;
	}


	return (ops[count].f);
}

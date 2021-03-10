#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int (*get_op_func(char *s))(int, int)
{
	int count = 0;

	op_t ops[] =
	{
			{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL}
	};

	while (count < 6)
	{
		if (strcmp(s, ops[count].op) == 0)
		{
			break;
		}

		count++;
	}

	return(ops[count].f);
}

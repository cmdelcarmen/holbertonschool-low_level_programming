#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function performs mathematical operation
 * @argc: argument
 * @argv: argument
 */
int main(int argc, char **argv)
{
	int num1, num2, calc;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	calc = get_op_func(argv[2])(num1, num2);

	printf("%d\n", calc);

	return (0);
}

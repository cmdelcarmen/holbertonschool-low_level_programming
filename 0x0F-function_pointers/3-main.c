#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function performs mathematical operation
 * @argc: argument
 * @argv: argument
 * Return: 0
 */
int main(int argc, char **argv)
{
	int num1, num2, calc = -1;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	calc = get_op_func(argv[2])(num1, num2);

	if (calc == -1)
	{
		printf("Error");
		exit(99);
	}

	printf("%d\n", calc);

	return (0);
}

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
	int num1, num2, calc;
	int (*math)(int, int);


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	math = get_op_func(argv[2]);

	if (math == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	calc = math(num1, num2);

	printf("%d\n", calc);

	return (0);
}

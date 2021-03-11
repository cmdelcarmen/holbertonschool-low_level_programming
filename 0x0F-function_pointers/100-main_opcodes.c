#include <stdio.h>
#include <stdlib.h>

/**
 * main - function prints out opcode
 * @argc: int
 * @argv: char
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (argv[1][0] == '-')
	{
		printf("Error\n");
		exit(2);
	}

	return (0);
}

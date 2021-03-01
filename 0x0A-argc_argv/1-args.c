#include <stdio.h>

/**
 * main - function prints the number of arguments passed into it
 * @argc: parameter
 * @argv: parameter
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argv != '\0')
	{
		printf("%d\n", (argc - 1));
	}

	return (0);
}

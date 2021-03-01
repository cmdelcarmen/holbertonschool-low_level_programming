#include <stdio.h>
/**
 * main - functions prints around name of program
 * @argc: parameter
 * @argv: parameter
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc >= 0)
		printf("%s \n", argv[0]);

	return (0);
}

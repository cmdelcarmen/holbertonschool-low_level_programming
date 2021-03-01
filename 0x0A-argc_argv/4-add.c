#include <stdio.h>
#include <stdlib.h>

/**
 * main - program adds two positive intergesr
 * @argc: parameter
 * @argv: parameter
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count, sum = 0;

	for (count = 1; count < argc; count++)
	{
		if (argv[count] < '0' || argv[count] > '9')
		{
			printf("Error\n");
			break;
		}
		sum += atoi(argv[count]);
	}

	printf("%d\n", sum);

	return (0);
}

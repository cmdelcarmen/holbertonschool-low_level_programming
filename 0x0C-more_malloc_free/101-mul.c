#include <stdio.h>
#include <stdlib.h>
/**
 * main - program multiplies two potive numbers
 * @argc: parameter
 * @argv: parameter
 * Return: 0
 */
int main(int argc, char *argv[])
{
	long int product, count, count2, print = 1;

	if (argc == 3)
	{
		for (count = 1; count < argc; count++)
		{
			for (count2 = 0; argv[count][count2] != '\0'; count2++)
			{
				if (argv[count][count2] < '0' || argv[count][count2] > '9')
				{
					print = 0;
					break;
				}
			}
			product = (atoi(argv[1]) * atoi(argv[2]));
		}
	}
	else
	{
		printf("Error\n");
		exit(98);
	}

	if (print == 1)
	{
		printf("%ld\n", product);
	}
	if (print == 0)
	{
		printf("Error\n");
		exit(98);
	}

	return (0);
}

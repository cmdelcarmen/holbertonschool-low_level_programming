#include <stdio.h>
#include <stdlib.h>

/**
 *  * main - program adds two positive intergesr
 *   * @argc: parameter
 *    * @argv: parameter
 *     * Return: 0
 */
int main(int argc, char *argv[])
{
	int count, count2, sum = 0, print = 1;

	for (count = 1; count < argc; count++)
	{
		for (count2 = 0; argv[count][count2] != '\0'; count2++)
		{
			if (argv[count][count2] < '0' || argv[count][count2] > '9')
			{
				print = 0;
				break;
			}
			else
			{
				sum += atoi(argv[count]);
			}
		}
	}
	if (print == 1)
	{
		printf("%d\n", sum);
	}
	if (print == 0)
	{
		printf("Error\n");
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimum number of coins to make change for an amount of money
 * @argc: parameter
 * @argv: parameter
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int ten = 10, five = 5, two = 2, oneVal = 1, count = 0, num, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	for (num = 0; cents > 0; num++)
	{
		if (cents >= 25)
		{
			cents -= 25;
			count++;
			continue;
		}
		else if ((cents >= 10) && (cents < 25))
		{
			cents -= ten;
			count++;
			continue;
		}
		else if ((cents >= 5) && (cents < 10))
		{   cents -= five;
			count++;
			continue;
		}
		else if ((cents >= 2) && (cents < 5))
		{   cents -= two;
			count++;
			continue;
		}
		else if (cents == 1)
		{	cents -= oneVal;
			count++;
			continue;
		}
	}
	printf("%d\n", count);
	return (0);
}

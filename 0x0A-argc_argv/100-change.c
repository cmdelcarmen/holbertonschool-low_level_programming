#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimum number of coins to make change for an amount of money
 * for example: if input 10 - output 1 bc you only need 1 dime, if input is 100 then output
 * is 4 because u only need 4 quaters. if input is 13, then output is 3 bc u need
 * @argc: parameter
 * @argv: parameter
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int twentyFiveVal = 25, tenVal = 10, fiveVal = 5, twoVal = 2, oneVal = 1;
	int count = 0, count2, cents, print = 0;

	cents = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	
	for (count2 = 0; cents > 0; count2++)
	{
		print = 1;

		if (cents >= 25)
		{
			cents -= twentyFiveVal;
			count++;
			continue;
		}
		else if ((cents >= 10) && (cents < 25))
		{
			cents -= tenVal;
			count++;
			continue;
		}
		else if((cents >= 5) && (cents < 10))
		{
			cents -= fiveVal;
			count++;
			continue;
		}
		else if ((cents >= 2) && (cents < 5))
		{
			cents -= twoVal;
			count++;
			continue;
		}
		else if (cents == 1)
		{
			cents -= oneVal;
			count++;
			continue;
		}
	}

	if (print == 1 )
	{
		printf("%d \n", count);
	}

	return (0);
}

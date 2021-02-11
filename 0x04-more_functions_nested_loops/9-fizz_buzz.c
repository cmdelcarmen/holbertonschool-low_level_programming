#include <stdio.h>
/**
* main - function prints underscores
*
* Return: 0
*/
int main(void)
{

	int number;

	for (number = 1; number < 101; number++)
	{
		if ((number % 3 == 0) && (number % 5 != 0))
		{
			printf("Fizz ");
		}

		else if ((number % 5 == 0) && (number % 3 != 0))
		{
			printf("Buzz ");
		}

		else if ((number % 3 == 0) && (number % 5 == 0))
		{
			printf("FizzBuzz ");
		}

		else
			printf("%i ", number);
	}
	printf("\n");
	return (0);
}

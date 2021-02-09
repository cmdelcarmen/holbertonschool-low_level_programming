#include <stdio.h>
/**
* main - funtion prints out first 50 fibonacci numbers
*
* Return: 0
*/
int main(void)
{
	int n = 0;
	unsigned long int sum = 0;
	unsigned long int prevSum1 = 0;
	unsigned long int prevSum2 = 1;
	unsigned long int newSum = 0;

	while (n < 4000000)
	{
		sum = prevSum1 + prevSum2;

		prevSum1 = prevSum2;
		prevSum2 = sum;


		if (sum % 2 == 0)
		{
			newSum += sum;
		}

		n++;
	}

	printf("%lu\n", newSum);
	return (0);
}


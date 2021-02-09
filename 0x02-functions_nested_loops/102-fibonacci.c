#include <stdio.h>
/**
* main - funtion prints out first 50 fibonacci numbers
*
* Return: 0
*/
int main(void)
{
	int n = 0;
	int sum = 0;
	long int prevSum1 = 0;
	long int prevSum2 = 1;

	while (n < 50)
	{
		sum = prevSum1 + prevSum2;
		printf("%i, ", sum);

		prevSum1 = prevSum2;
		prevSum2 = sum;

		n++;
	}

	printf("\n");

	return (0);
}

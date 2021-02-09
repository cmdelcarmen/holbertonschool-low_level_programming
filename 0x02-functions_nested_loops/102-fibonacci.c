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

	while (n < 50)
	{
		sum = prevSum1 + prevSum2;
		printf("%lu", sum);

		prevSum1 = prevSum2;
		prevSum2 = sum;

			if (n != 49)
			{
				printf(", ");
			}
				else
			{
				printf("\n");
			}
		n++;
	}
	return (0);
}

#include <stdio.h>
/**
* main - funcation calculates sum on multiples
*
* Return: 0
*/
int main(void)
{
	int num = 3;
	int multipleOfThree;
	int multipleOfFive;
	int sum = 0;

	while (num < 1024)
	{

		multipleOfThree = num % 3;
		multipleOfFive = num % 5;

		if (multipleOfThree == 0 || multipleOfFive == 0)
		{
			sum += num;
		}

		num++;
	}

	printf("%i ", sum);
	printf(" \n");
	
	return 0;
}

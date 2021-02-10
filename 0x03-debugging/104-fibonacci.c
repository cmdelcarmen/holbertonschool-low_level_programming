#include <stdio.h>
/**
*main - prints fibonacci numbers
*
* Return: 0
*/
int main(void)
{
	double fib1 = 1, fib2 = 2, fib3, num, count = 0;

	num = 99;
	printf("%.0lf, ", fib1);
	printf("%.0lf, ", fib2);
	count = 4;
	while (count < num)
	{
		fib3 = fib1 + fib2;
		count++;
		printf("%0.lf", fib3);
		fib1 = fib2;
		fib2 = fib3;
		if (count != 99)
			printf(", ");
	}
	printf("\n");
	return (0);
}

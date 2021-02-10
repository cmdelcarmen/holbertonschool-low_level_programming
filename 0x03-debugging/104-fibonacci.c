#include <stdio.h>
/**
*main - prints fibonacci numbers
*
* Return: 0
*/
int main(void)
{
	long double fib1 = 1, fib2 = 2, fib3, num, count = 0;

	num = 100;
	printf("%.0Lf, ", fib1);
	printf("%.0Lf, ", fib2);
	count = 4;
	while (count < num)
	{
		fib3 = fib1 + fib2;
		count++;
		printf("%0.Lf", fib3);
		fib1 = fib2;
		fib2 = fib3;
		if (count != 100)
			printf(", ");
	}
	printf("\n");
	return (0);
}

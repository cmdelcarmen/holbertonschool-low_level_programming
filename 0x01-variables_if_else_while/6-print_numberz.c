#include <stdio.h>
/**
* main - Produces a random number, then prints a string
* Return: 0
*/

int main(void)
{
	int a;

	a = 0;

	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}

	putchar('\n');
	return (0);
}

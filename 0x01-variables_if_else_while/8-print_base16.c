#include <stdio.h>
/**
* main - Produces a random number, then prints a string
* Return: 0
*/

int main(void)
{
	int a;
	char ch = 97;

	a = 0;

	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}

	while (ch < 103)
	{
		putchar(ch);
		ch++;
	}



	putchar('\n');
	return (0);
}

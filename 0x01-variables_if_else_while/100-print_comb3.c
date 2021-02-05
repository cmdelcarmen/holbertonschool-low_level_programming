#include <stdio.h>
/**
* main - Produces a random number, then prints a string
* Return: 0
*/

int main(void)
{
	int a;
	int b;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = a + 1; b <= '9'; b++)
		{
			putchar(a);
			putchar(b);
			if (a != '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar ('\n');
return (0);
}

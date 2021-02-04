#include <stdio.h>
/**
* main - function prints the required text and returns 0
* Return: 0
*/
int main(void)
{
	int a;

	for (a = 0; a < 100 ; a++)
	{
		putchar((a / 10) + '0');
		putchar((a % 10) + '0');

		if (a <= 98)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar ('\n');
	return (0);
}

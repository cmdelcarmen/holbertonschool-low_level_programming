#include <stdio.h>
/**
* main - Produces a random number, then prints a string
* Return: 0
*/

int main(void)
{

	char ch = 122;

	while (ch > 96)
	{
		putchar(ch);
		ch--;
	}

	putchar('\n');
	return (0);
}


#include <stdio.h>
/**
 * * main - Produces a random number, then prints a string
 * * Return: 0
 * */

int main(void)
{

	char ch = 97;

	while (ch < 123)
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}


#include <stdio.h>
/**
 * main - Produces a random number, then prints a string
 * Return: 0
 */

int main(void)
{

	char lowerCase = 97;
	char upperCase = 65;

	while (lowerCase < 123)
	{
		putchar(lowerCase);
		lowerCase++;
	}

	while (upperCase < 91)
	{
		putchar(upperCase);
		upperCase++;
	}

	putchar('\n');
	return (0);
}


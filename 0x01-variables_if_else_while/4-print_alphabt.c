#include <stdio.h>
/**
* main - Produces a random number, then prints a string
* Return: 0
*/

int main(void)
{

	char lowerCase = 97;

	while (lowerCase < 123)
	{
		if (lowerCase != 101 && lowerCase != 113)
		{
			putchar(lowerCase);
		}
	lowerCase++;
	}

	putchar('\n');
	return (0);
}


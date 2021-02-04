#include <stdio.h>
/**
* main - Produces a random number, then prints a string
* Return: 0
*/

int main(void)
{
	int i;

	for(i = 0; i < 100 ; i++)
	{
		putchar((i/10)+'0');
		putchar((i%10)+'0');
		printf("\n");
	}

	return (0);
}

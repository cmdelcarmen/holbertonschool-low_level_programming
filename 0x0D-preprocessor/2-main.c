#include <stdio.h>
#include <unistd.h>

#define FILENAME __FILE__

int _putchar(char c)
{
		return (write(1, &c, 1));
}

/**
 * main - program prints the name of the file
 * it was compiled from
 *
 * Return: 0;
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}

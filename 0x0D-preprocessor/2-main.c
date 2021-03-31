#include <stdio.h>

#define FILENAME __FILE__
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

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Produces a random number, then prints a string
* Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n == 0)
{
printf("%d is 0.\n", n);
}
else if (n > 0)
{
printf("%d is positive.\n", n);
}
else
{
printf("%d is negative.\n", n);
}
return (0);
}

//#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
*/
void rev_string(char *s);

int main(void)
{
    char s[10] = "Holberton";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}

void rev_string(char *s)
{
	int arrayLength = 0;
	int newSpot;
	int count;
	char sub;
	int oldSpot;

	for (count = 0; s[count] != '\0'; count++)
	{
		arrayLength++;
	}
	
	newSpot = arrayLength - 1;

	{
		for (oldSpot = 0; oldSpot <= newSpot; oldSpot++)
		{
			sub = s[oldSpot];
			s[oldSpot] = s[newSpot];
			s[newSpot]= sub;
			newSpot--;
		}
	}	
}


#include "holberton.h"

/**
*print_alphabet - prints out alphabet in lowercase letter
*/

void print_alphabet(void)
{

	char lowercaseLetter;

	for (lowercaseLetter = 97; lowercaseLetter <= 122; lowercaseLetter++)
	{

		_putchar(lowercaseLetter);
	}

	_putchar('\n');

}


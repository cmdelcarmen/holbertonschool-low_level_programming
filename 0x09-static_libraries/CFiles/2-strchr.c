#include "holberton.h"

/**
 *  * *_strchr - check the code for Holberton School students.
 *   * @s: pointed passed
 *    * @c: char passed
 *     *
 *      * Return: pointer or NULL
 *       */
char *_strchr(char *s, char c)
{
	int count;
	int printPoint;
	int stop = 1;


	for (count = 0; s[count] != '\n'; count++)
	{
		if (stop == 1)
		{
			if (s[count] == c)
			{
				printPoint = count;
				stop = 0;
			}
		}
	}

	if (stop == 0)
	{
		s += printPoint;
		return (s);
	}

	else
		return ('\0');

}

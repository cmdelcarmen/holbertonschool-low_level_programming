#include "holberton.h"

/**
 *  * *_memset - check the code for Holberton School students.
 *   * @s: char pointer passed
 *    * @b: variable passed
 *     * @n: unsigned int passed
 *      *
 *       * Return: Always s
 *        */
char *_memset(char *s, char b, unsigned int n)
{
		unsigned int count;

			for (count = 0; count < n; count++)
					{
								s[count] = b;
									}

				return (s);
}

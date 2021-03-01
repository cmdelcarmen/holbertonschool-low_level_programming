#include "holberton.h"

/**
 *  * _strcmp - function compares two strings
 *   * @s1: pointer
 *    * @s2: pointer
 *     *
 *      * Return: Always 0.
 *       */

int _strcmp(char *s1, char *s2)
{
		int count;

			for (count = 0; s1[count] != '\0' || s2[count] != '\0'; count++)
					{
								if (s1[count] != s2[count])
												return (s1[count] - s2[count]);
									}
				return (0);
}

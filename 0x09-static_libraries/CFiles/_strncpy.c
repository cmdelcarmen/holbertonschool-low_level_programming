#include "holberton.h"

/**
 *  * *_strncpy - copies a string
 *   * @dest: pointer
 *    * @src: pointer
 *     * @n: interger
 *      *
 *       * Return: dest
 *        */
char *_strncpy(char *dest, char *src, int n)
{
		int count;

			for (count = 0; src[count] != '\0'; count++)
					{
								if (count < n)
											{
															dest[count] = src[count];
																	}
									}

				for (; count < n; count++)
						{
									dest[count] = '\0';
										}

					return (dest);
}

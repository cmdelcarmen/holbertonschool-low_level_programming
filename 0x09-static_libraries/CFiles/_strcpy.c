#include "holberton.h"
/**
 * * *_strcpy - function copies string pointed to by src and prints it
 * * @dest: pointed passed
 * * @src: pointed passed
 * *
 * * Return: dest
 * */
char *_strcpy(char *dest, char *src)
{
		int count, arrayLength;

			arrayLength = 0;

				for (count = 0; src[count] != '\0'; count++)
						{
									arrayLength++;
										}

					for (count = 0; count <= arrayLength; count++)
							{
										dest[count] = src[count];
											}

						return (dest);
}

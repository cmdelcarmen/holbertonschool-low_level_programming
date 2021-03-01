#include "holberton.h"
#include "holberton.h"
/**
 * * _strlen - function returns length of string
 * * @s: pointer passed
 * *
 * * Return: length of string
 * */
int _strlen(char *s)
{
		int countString;

			countString = 0;

				while (*s != '\0')
						{	countString++;
									s++;
										}
					return (countString);
}

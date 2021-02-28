#include "holberton.h"

int getLength(char *s, int);
int is_palindrome(char *s);
int getPalindrome(int arrayLength, char *s, int count, int isPalindrome);

/**
 * is_palindrome - check the code for Holberton School students.
 * @s: array passed
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
	int arrayLength = 0;
	int count = 0, isPalindrome = 0;

	if (s[0] == '\0')
	{
		return (isPalindrome);
	}
	arrayLength = getLength(s, arrayLength);
	isPalindrome = getPalindrome(arrayLength, s, count, isPalindrome);

	if (isPalindrome == 0)
	{
		return (isPalindrome);
	}
	else
	{
		return (1);
	}
}

/**
 * getLength - check the code for Holberton School students.
 * @s: array passed
 * @arrayLength: length of array
 * Return: isPalindrome
 */
int getLength(char *s, int arrayLength)
{
	if (s[arrayLength] != '\0')
	{
		arrayLength++;
	}

	else
	{
		return (arrayLength - 1);
	}
	return (getLength(s, arrayLength));
}

/**
 * getPalindrome - check the code for Holberton School students.
 * @arrayLength: length of array
 * @s: array passed
 * @count: counter
 * @isPalindrome: bool variable
 * Return: isPalindrome
 */
int getPalindrome(int arrayLength, char *s, int count, int isPalindrome)
{
	if ((count == arrayLength) || ((count + 1) == arrayLength))
	{
		return (isPalindrome);
	}

	if (s[count] == s[arrayLength])
	{
		isPalindrome = 1;
		return (getPalindrome(arrayLength - 1, s, count + 1, isPalindrome));
	}

	else
	{
		isPalindrome = 0;
		return (isPalindrome);
	}
}

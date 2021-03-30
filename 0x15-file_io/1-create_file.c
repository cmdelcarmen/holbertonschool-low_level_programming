#include "holberton.h"

/**
 * _strlen - function returns length of string
 * @s: pointer passed
 *
 * Return: length of string
 */
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

/**
 * create_file - function creates a file
 * @filename: name of file
 * @text_content: string to write to file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, lengthOfString;
	char *f = "fails";

	if (filename == NULL)
	{
		return (-1);
	}

	lengthOfString = _strlen(text_content);
	fd = open(filename, O_CREAT | O_RDONLY, 0600);

	if (fd == -1)
	{
		write(STDOUT_FILENO, f, 6);
		return (-1);
	}

	write(fd, text_content, lengthOfString);
	close(fd);

	return (1);
}

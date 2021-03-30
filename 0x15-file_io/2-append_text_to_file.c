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
 * append_text_to_file - function appends text at the end of a file
 * @filename: name of file
 * @text_content: contents to add to end of while
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, lengthOfString;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND, 0664);
		if (fd == -1)
		{
			return (-1);
		}
		else
		{
			return (1);
		}
	}

	lengthOfString = _strlen(text_content);

	fd = open(filename, O_WRONLY | O_APPEND, 0664);
	if (fd == -1)
	{
		return (-1);
	}

	write(fd, text_content, lengthOfString);

	close(fd);
	return (1);
}

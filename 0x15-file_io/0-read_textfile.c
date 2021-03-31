#include "holberton.h"

/**
 * read_textfile - function reads a text file
 * and prints it to the POSIX standard output
 * @filename: name of file
 * @letters: the number of letters it should read and print
 * Return: the actual numbre of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, numOfLettersRead;

	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
			if (buffer == NULL)
			{
				return (0);
			}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	numOfLettersRead = read(fd, buffer, letters);

	write(STDOUT_FILENO, buffer, numOfLettersRead);

	free(buffer);
	close(fd);

	return (letters);
}

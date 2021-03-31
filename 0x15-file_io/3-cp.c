#include <stdlib.h>
#include <stdio.h>

/**
 * main - function copies the content of a file to another file
 * @argc: argument passed
 * @argv: argument passed
 * Return 0;
 */
int main(argc, *argv[])
{
	int fd, b, c, d;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
					exit(98);
		}

	return (0);
}


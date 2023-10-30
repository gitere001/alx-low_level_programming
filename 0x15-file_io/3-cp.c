#include "main.h"
#include <stdio.h>

/**
 * error_file - Check if files can be opened and exit
 * with appropriate error codes.
 * @file_from: File descriptor of the source file.
 * @file_to: File descriptor of the destination file.
 * @argv: Array of command-line arguments.
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Entry point for copying a file.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 * Return: 0 on success, various error codes on failure.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t nchars;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	error_file(file_from, file_to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(file_from, buffer, 1024);


		if (nchars > 0)
		{
			write(file_to, buffer, nchars);

		}
	}

	return (0);
}

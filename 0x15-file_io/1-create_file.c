#include "main.h"

/**
 * create_file - function that creates a file.
 * if the file already exists, truncate it
 * @filename: name of the file
 * @text_content: actual content of the file
 * Return: 1 on success, -1 on failure
 * (file can not be created, file can not
 * be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int file, result = 1, countn = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[countn])
			countn++;
		result = write(file, text_content, countn);
	}
	if (result == -1)
		return (-1);
	close(file);
	return (1);
}

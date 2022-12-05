#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: the name of file
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success and -1 if it fails
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int no_letters;
	int permi;

	if  (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (no_letters = 0; text_content[no_letters]; no_letters)
		;
	permi = write(fd, text_content, no_letters);

	if (permi == -1)
		return (-1);
	close(fd);
	return (1);
}

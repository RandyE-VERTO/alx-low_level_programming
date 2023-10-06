#include "main.h"

/**
 * create_file - this function creates a file
 *
 * @filename: the name of the file to create
 * @text_content: the content of the file
 *
 * Return: 1 for successful execution and -1 for error
 */

int create_file(const char *filename, char *text_content)
{
	int fd, cntnt, wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (text_content == NULL)
		text_content = "";

	for (cntnt = 0; text_content[cntnt]; cntnt++)
		;
	wr = write(fd, text_content, cntnt);

	if (fd == -1 || wr == -1)
		return (-1);

	close(fd);

	return (1);
}

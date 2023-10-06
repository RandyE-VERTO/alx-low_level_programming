#include "main.h"

/**
 * append_text_to_file - this function appends text at
 * the end of a file.
 *
 * @filename: the name of the file
 * @text_content: the content of the file in text
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, cntnt, wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (text_content != NULL)
	{
		for (cntnt = 0; text_content[cntnt]; cntnt++)
			;
		wr = write(fd, text_content, cntnt);

		if (fd == -1 || wr == -1)
			return (-1);
	}
	close(fd);

	return (1);
}

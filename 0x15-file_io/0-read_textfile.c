#include "main.h"

/**
 * read_textfile - this function that reads a text file and
 * prints it to the POSIX standard output
 *
 * @filename: the name of the file being read
 * @letters: the number of letters to be printed
 *
 * Return: number of bytes read and printed, or 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t bytes_read, bytes_written;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters + 1);
	if (buf == NULL)
		return (0);

	bytes_read = read(fd, buf, letters);
	if (bytes_read == -1)
		return (0);

	buf[letters + 1] = '\0';
	close(fd);

	bytes_written = write(STDOUT_FILENO, buf, bytes_read);
	if (bytes_written == -1)
		return (0);

	free(buf);

	return (bytes_read);
}

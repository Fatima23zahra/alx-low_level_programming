#include "main.h"
#include <stdlib.h>


/**
 * read_textfile - read a text file and print to stdout
 * @filename: the file to read
 * @letters: the number of letters to read
 *
 * Return: if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t b_read;
	ssize_t b_written;
	int fd;

	if (!(filename && letters))
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	b_read = read(fd, buffer, letters);
	close(fd);

	if (b_read < 0)
	{
		free(buffer);
		return (0);
	}
	if (!b_read)
		b_read = letters;

	b_written = write(STDOUT_FILENO, buffer, b_read);
	free(buffer);

	if (b_written < 0)
		return (0);

	return (b_written);
}

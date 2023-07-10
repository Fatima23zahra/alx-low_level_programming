#include "main.h"

/**
 * append_text_to_file - Appends text to an existing file
 * @filename: filename
 * @text_content: text
 * Return: the length of str, or -1 if str is NULL
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int lettercount, write_d;
	{
		if (text_content == NULL)
		text_content = "";
	}
	{
		if (filename == NULL)
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	{
		if (fd == -1)
		return (-1);
	}
	for (lettercount = 0; text_content[lettercount] != '\0'; lettercount++)
	write_d = write(fd, text_content, lettercount);
	{
		if (write_d == -1)
		return (-1);
	}

	close(fd);
	return (1);
}

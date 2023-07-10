#include "main.h"

/**
 * create_file - creates a new file
 * @filename: pointer to name of the file
 * @text_content: pointer to a write the text content
 * Return: the length of str, or -1 if str is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int lettercount, writecount;
	{
		if (filename == NULL)
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	for (lettercount = 0; text_content[lettercount] != '\0'; lettercount++)
	{
		;
	}

	writecount = write(fd, text_content, lettercount);

	if (writecount == -1)
	{
		return (-1);
	}

	close(fd);

return (1);
}

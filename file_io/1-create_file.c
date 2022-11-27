#include "main.h"
/**
 * create_file - a function that creates a file.
 * @filename: the file.
 * @text_content: the content to be in the file.
 * Return: the actual number of letters it could read and print
 */
int create_file(const char *filename, char *text_content)
{
	char *buf = NULL;
	int fd = 0, rd = 0;

	if (!filename)
	{
		return (-1);
	}
	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_CREATE | O_TRUNC | S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (fd);
	}
	close(fd);
	wr = write(fd, buf, rd);
	if (wr == -1)
	{
		return (wr);
	}
	free(buf);
	return (1);
}

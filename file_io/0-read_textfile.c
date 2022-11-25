#include "main.h"
/**
 * read_textfile -  a function that reads a text file and prints it
 * to the POSIX standard output.
 * filename: the file.
 * letters: is the number of letters it should read and print.
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf = NULL;
	int fd = 0, rd = 0, wr = 0;

	if (!filename)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	rd = read(fd, buf, letters);
	if (rd == -1)
	{
		return (0);
	}
	close(fd);
	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1)
	{
		return (0);
	}
	free(buf);
	return (wr);
}

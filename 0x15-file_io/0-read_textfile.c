#include "main.h"

/**
 * read_textfile -  Function that read a text file
 * and prints it to the POSIX stand output
 *
 * @filename: name of the file
 * @letters: number of leters it should print
 *
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wr;
	int *buf;

	if (filename == NULL)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDWR);

	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	rd = read(fd, buf, letters);
	if (rd == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}
	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1)
	{
		return (0);
	}
	close(fd);
	free(buf);
	return (wr);
}


#include "main.h"

/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: name of the file
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int final_byt;
	int no_byt;
	int fd;
	char *buffer;

	if (filename == NULL)
		return(0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return(0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		free(buffer);
		return(0);
	}

	no_byt = read(fd, buffer, letters);
	if (no_byt == -1)
	{
		close(fd);
		free(buffer);
		return(0);
	}

	final_byt = write(STDOUT_FILENO, buffer, no_byt);
	if (final_byt == -1)
	{
		return(0);
	}
	close(fd);
	free(buffer);
	return (final_byt);
}

#include "main.h"


/**
 * main - check the code
 * @ac: count of argument
 * @av: an array of string containing the
 * arguments passed to the program
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(av[1], av[2]);

	return (0);
}

/**
 * copy_file - a program that copies the
 * content of the file to another file
 * @filename1: file from
 * @filename2: file to
 *
 * Return: the number of character copied
 */

ssize_t copy_file(const char *filename1, const char *filename2)
{
	int fd1, fd2, rd, wr;

	int *buf, len = 0;

	buf = malloc(1204);
	if (buf == NULL)
		return (0);

	fd1 = open(filename1, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename1);
		exit(98);
	}
	while (*buf)
	{
		len++;
	}
	rd = read(fd1, buf, len);
	fd2 = open(filename2, O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename2);
		exit(99);
	}
	wr = write(fd2, buf, rd);

	free(buf);
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (wr);
}

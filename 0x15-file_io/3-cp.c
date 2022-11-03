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

	int *buf;

	buf = malloc(1204);
	if (buf == NULL)
		return (0);

	fd1 = open(filename1, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}
	rd = read(fd1, buf, 1204);

	fd2 = open(filename2, O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0665);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE");
		exit(99);
	}
	wr = write(fd2, buf, rd);
	close(fd1);
	close(fd2);

	return (wr);

}

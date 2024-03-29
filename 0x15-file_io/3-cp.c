#include "main.h"

void print_errmsg(int exitInt, int fd, char *filename);
/**
 * main -  a program that copies the content of a file to another file
 * @ac: number of argument;
 * @av: an array of the individual arguments
 *
 * Return: 0 if sucessful
 */

int main(int ac, char **av)
{
	int fd1 = 0, fd2;
	int read_byt, write_byt;
	char buffer[1024];

	if (ac != 3)
		print_errmsg(97, fd1, av[1]);

	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
		print_errmsg(98, fd1, av[1]);

	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
		print_errmsg(99, fd2, av[2]);

	while (read_byt != 0)
	{
		read_byt = read(fd1, buffer, 1024);
		if (read_byt == -1)
			print_errmsg(98, fd1, av[1]);

		write_byt = write(fd2, buffer, read_byt);
		if (write_byt == -1)
			print_errmsg(99, fd2, av[2]);
	}
	if (close(fd1) == -1)
		print_errmsg(100, fd1, av[1]);
	if (close(fd2) == -1)
		print_errmsg(100, fd2, av[1]);
	return (0);
}

/**
 * print_errmsg - prints error message for each case
 * @exitInt: the exit value
 * @fd: the file descriptor
 * @filename: name of file
 */
void print_errmsg(int exitInt, int fd, char *filename)
{
	switch (exitInt)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
			break;
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
			exit(98);
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
			exit(99);
			break;
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(100);
			break;
	}
}

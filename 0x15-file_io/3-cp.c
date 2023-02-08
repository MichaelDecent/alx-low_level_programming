#include "main.h"
/**
 * main -  a program that copies the content of a file to another file
 * @ac: number of argument;
 * @av: an array of the individual arguments
 *
 * Return: 0 if sucessful
 */

int main(int ac, char **av)
{
	int fd1, fd2;
	int read_byt, write_byt;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s %s\n", av[1], av[2]);
		exit(97);
	}
	
	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	
	while(read_byt != 0)
	{
		read_byt = read(fd1, buffer, 1024);
		if (read_byt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		write_byt = write(fd2, buffer, read_byt);
		if (write_byt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
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
	return(0);

}

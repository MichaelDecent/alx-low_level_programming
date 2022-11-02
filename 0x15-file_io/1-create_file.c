#include "main.h"
/**
 * create_file - a funtion that creatses a file
 * @filename: a pointer that points to filename
 * @text_content: a NULL terminate string
 *
 * Return: 1 if sucessful -1 if fails
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = creat(filename, 0600);
	if (fd == -1)
		return (0);
	write(fd, text_content, strlen(text_content));
	close(fd);
	return (1);
}

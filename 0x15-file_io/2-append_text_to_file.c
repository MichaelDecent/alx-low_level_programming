#include "main.h"
/**
 * append_text_to_file - A function that appends text at the end of the a file
 * @filename: a pointer to the filename
 * @text_content:NULL terminated string to add
 * at the end of the file
 *
 * Return: 1 if successfull and -1 if failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	write(fd, text_content, strlen(text_content));

	return (1);
}

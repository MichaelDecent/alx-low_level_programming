#include "main.h"
/**
 * append_text_to_file -  a function that appends text
 * at the end of a file
 * @filename: name of file
 * @text_content: the NULL terminated string
 * to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, chk, len;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	len = 0;
	while (text_content[len] != '\0')
	{
		len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	chk = write(fd, text_content, len);
	if (chk == -1)
		return (-1);
	close(fd);
	return(1);

}

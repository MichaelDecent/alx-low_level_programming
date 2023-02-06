#include "main.h"
/**
 * create_file - a function that creates a file
 * @filename: name of file
 * @text_content: a NULL terminated string to write to the file
 *
 * Return:  1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int chk;
	int len;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	len = 0;
	while (text_content[len])
		len++;
	printf("len == %d", len);

	fd = open(filename, O_CREAT | O_EXCL | O_WRONLY, 0600);
	if (fd < 0)
	{
		if (errno == EEXIST)
		{
			fd = open(filename, O_WRONLY | O_TRUNC);
			if (fd == -1)
				return (-1);
		}
		return (-1);
	}

	chk = write(fd, text_content, len);
	if (chk == -1)
	{
		return (-1);
	}
	return (1);
}

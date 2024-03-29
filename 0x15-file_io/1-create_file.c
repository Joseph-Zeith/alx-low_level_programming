#include "main.h"
#include <stdlib.h>

/**
 * create_file -  creates a file
 * @filename: name of the file to create
 * @text_content: a pointer to the string to write to the file
 *
 * Return: -1 on failure of the function and 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int fd, j, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	j = write(fd, text_content, len);
	if (fd == -1 || j == -1)
		return (-1);
	close(fd);
	return (1);
}

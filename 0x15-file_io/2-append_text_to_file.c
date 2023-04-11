#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file to append
 * @text_content: the string to write at the end
 *
 * Return: 1 if the file name exits and -1 if it is NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int g, j, len = 0;

	if (filename == 0)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	j = open(filename, O_WRONLY | O_APPEND);
	g = write(j, text_content, len);
	if (j == -1 || g == -1)
		return (-1);
	close(j);
	return (1);
}

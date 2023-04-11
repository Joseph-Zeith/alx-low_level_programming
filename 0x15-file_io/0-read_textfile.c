#include "main.h"
#include <stdlib.h>

/**
 * read_file -  creates a file
 * @filename: name of the file to create
 * Return: w- actual number read and  printed
 * 0 when the function fails or the filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t j;
	ssize_t g;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	j = read(fd, buf, letters);
	g = write(STDOUT_FILENO, buf, j);
	free(buf);
	close(fd);
	return (g);
}

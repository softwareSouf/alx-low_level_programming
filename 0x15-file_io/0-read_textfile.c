#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text print to stdout
 * @filename: text file being read
 * @letters: number of letters
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t y;
	ssize_t z;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	y = read(fd, buffer, letters);
	z = write(STDOUT_FILENO, buf, z);

	free(buffer);
	close(fd);
	return (y);
}

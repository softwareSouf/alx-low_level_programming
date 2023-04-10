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
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t r;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(fd);
	return (w);
}

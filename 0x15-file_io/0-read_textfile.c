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
	ssize_t o;
	ssize_t r;
	ssize_t w;
	char *buff;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, buff, letters);
	w = write(STDOUT_FILENO, buff, r);
	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(o);
	return (w);
}

#include "main.h"

/**
 * read_textfile - reads a text file and prints
 * @filename: file to read
 * @letters: content
 * Return: w
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (!buf | !filename)
	{
		return (0);
	}
	o = open(filename, O_RDONLY);
	r = read(o, buf, letters);
	write(1, buf, r);
	if (o == -1)
	{
		return (0);
	}
	free(buf);
	close(o);
	return (r);
}

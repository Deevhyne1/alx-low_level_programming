#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: z- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *v;
	ssize_t x;
	ssize_t z;
	ssize_t t;

	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	v = malloc(sizeof(char) * letters);
	t = read(x, v, letters);
	z = write(STDOUT_FILENO, v, t);

	free(v);
	close(x);
	return (z);
}

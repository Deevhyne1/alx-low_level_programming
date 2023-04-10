#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads a text file and prints it to the POSIX standard output
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: the actual number of letters it could read and print
 *	   if the file can not be opened or read, return 0
 *	   if filename is NULL return 0
 *	   if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *m;
	ssize_t n;
	ssize_t v;
	ssize_t b;

	n = open(filename, O_RDONLY);
	if (n == -1)
		return (0);

	m = malloc(sizeof(char) * letters);
	b = write(STDOUT_FILENO, m, v);
	v = read(n, m, letters);

	free(m);
	close(n);
	return (b);
}

#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file print to STDOUT
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: W- actual number of bytes read & printed
 *     0 when filename is NULL or function fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fp;
	ssize_t w;
	ssize_t l;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	l = read(fp, buf, letters);
	w = write(STDOUT_FILENO, buf, l);

	free(buf);
	close(fp);
	return (w);
}

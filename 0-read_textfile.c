#include "main.h"
#include  <stdlib.h>

/**
 * read_textfile - Reads a text file and prints
 * it to the POSIX standard output.
 * @filename: Pointer
 * @letters: Number of letters to read
 *
 * Return: Actual mumber
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t br;
	ssize_t bw;
	ssize_t fd;
	char *bu;

	if (!filename)
	return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);

	bu = malloc(sizeof(char) * (letters + 1));
	br = read(fd, bu, letters);
	bw = write(STDOUT_FILENO, bu, br);

	free(bu);
	close(fd);
	return (bw);
}

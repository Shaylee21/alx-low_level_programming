#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

char *create_bu(char *file);
void close_files(int fd);

/**
 * create_bu - Allocates bytes
 * @file: The name of the file
 *
 * Return: Newly-allocated buffer.
 */
char *create_bu(char *file)
{
	char *bu;

	bu = malloc(sizeof(char) * 1024);

	if (bu == NULL)
	{
	dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (bu);
}

/**
 * close_files - Closes file.
 * @fd: Descriptor to be closed.
 */
void close_files(int fd)
{
	int c;

	x = close(fd);

	if (x == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
	}
}

/**
 * main - Copies the content of a file to another file
 * @argc: The number of arguments passed to the program.
 * @argv: Array of pointers to the arguments.
 *
 * Return: 0 on success, 97-100 on failure
 *
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, r, w;
	char *bu;

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}

	bu = create_bu(argv[2]);
	fd_from = open(argv[1], O_RDONLY);
	r = read(fd_from, bu, 1024);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
	if (fd_from == -1 || r == -1)
	{
	dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
	free(bu);
	exit(98);
	}

	w = write(fd_to, bu, r);
	if (to == -1 || w == -1)
	{
	dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]);
	free(bu);
	exit(99);
	}

	r = read(from, bu, 1024);
		fd_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(bu);
	close_files(fd_from);
	close_files(fd_to);

	return (0);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_buffer_o(char *files);
void close_file_o(int fd);

/**
 * create_buffer_o - Allocates 1024 bytes for a buffer.
 * @files: Name of the file to read from.
 *
 * Return: A pointer to the buffer, or NULL on failure.
 */
char *create_buffer_o(char *files)
{
	char *bu;

	bu = malloc(sizeof(char) * 1024);

	if (bu == NULL)
	{
	dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n", files);
	exit(99);
	}

	return (bu);
}

/**
 * close_file_o - Closes file descriptors.
 * @fd: The file to be closed.
 */
void close_file_o(int fd)
{
	int x;

	x = close(fd);

	if (x == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
	}
}

/**
 * main - Copies file to another file.
 * @argc: The number of arguments.
 * @argv: An array of arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument number is failed - exit code 97.
 *              If file_fr does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int fr, to, f_r, f_w;
	char *bu;

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_fr file_to\n");
	exit(97);
	}

	bu = create_buffer_o(argv[2]);
	fr = open(argv[1], O_RDONLY);
	f_r = read(fr, bu, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fr == -1 || f_r == -1)
		{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		free(bu);
		exit(98);
		}

		f_w = write(to, bu, f_r);
		if (to == -1 || f_w == -1)
		{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]);
		free(bu);
		exit(99);
		}

		f_r = read(fr, bu, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (f_r > 0);

	free(bu);
	close_file_o(fr);
	close_file_o(to);

	return (0);
}

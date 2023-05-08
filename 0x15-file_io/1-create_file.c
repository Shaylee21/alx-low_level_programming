#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: Pointer to name
 * @text_content: Pointer to text.
 *
 * Return: 1 on success, -1 on failure.
 *
 */

int create_file(const char *filename, char *text_content)
{
	int f;
	int x;
	int y = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
	for (y = 0; text_content[y];)
	y++;
	}

	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(f, text_content, y);

	if (f == -1 || x == -1)
	return (-1);

	close(f);

	return (1);
}

#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Pointer to the text of the file
 * @text_content: String to add
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f, w, l = 0;

	if (filename == NULL)
	return (-1);

	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
	return (-1);

	if (text_content != NULL)
	{
	while (text_content[l])
	l++;
	}

	w = write(f, text_content, l);
	if (w == -1)
	{
	close(f);
	return (-1);
	}

	close(f);
	return (1);
}

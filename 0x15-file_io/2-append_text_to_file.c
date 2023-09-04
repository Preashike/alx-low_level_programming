#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename:the name of the file.
 * @text_content: text content.
 *
 * Return: If the function fails or filename is NULL - -1. Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	file_d = open(filename, O_WRONLY | O_APPEND);
	w = write(file_d, text_content, length);

	if (file_d == -1 || w == -1)
		return (-1);

	close(file_d);

	return (1);
}

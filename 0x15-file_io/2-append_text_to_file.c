#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: variable to be manipulated
 * @text_content: variable to be manipulated
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, wri, count;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}

	file = open(filename, O_WRONLY | O_APPEND);
	wri = write(file, text_content, count);

	if (file == -1 || wri == -1)
		return (-1);

	close(file);
	return (1);
}

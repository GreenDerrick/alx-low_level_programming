#include <stdlib.h>
#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: variable to be manipulated
 * @text_content: variable to be manipulated
 * Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, wri, count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[count];)
			count++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wri = write(fd, text_content, count);

	if (file == -1 || wri == -1)
		return (-1);

	close(file);

	return (1);
}

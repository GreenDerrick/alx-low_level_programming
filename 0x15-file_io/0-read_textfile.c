#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - function that reads a text file and prints
 * @filename: variable to be manipulated
 * @letters: variable to be manipulated
 * Return: actual letters to be readn and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t file;
	ssize_t wri;
	ssize_t t;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(file, buf, letters);
	wri = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(file);
	return (wri);
}

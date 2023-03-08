#include <unistd.h>

/**
 * _putchar - writes the charactrer c to stdout
 * @c: The character to print
 *
 * Return: 1 if success
 * On error, -1 returned , and errno is ser approprately
 * /
 *
 * int _putchar(char c)
 * {
 * 	return(write(1, &c, 1));
 * }

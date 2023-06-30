#include <unistd.h>
/**
 * _putchar - function that prints characters in a string
 *
 * @c: character to be manipulated
 * Return: 1 if true 0 if false
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

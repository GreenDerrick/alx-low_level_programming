#include <unistd.h>
/**
 * _putchar - prints the contents
 *
 * @c: variable to be manipulated
 * Return: the printed contents of c
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include <unistd.h>
/**
 * _putchar - function to write a chaarcter
 *
 * @c: variable to be manipulated
 * Return: 1 or 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

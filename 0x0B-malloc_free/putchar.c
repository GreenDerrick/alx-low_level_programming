#include <unistd.h>
/**
 * _putchar - function that prints characeters
 * @c: variable to be manipulated
 * Return: 1 or 0
 */

int _putchar(int c)
{
	return (write(1, &c, 1));
}

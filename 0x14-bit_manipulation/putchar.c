#include <unistd.h>
/**
 * _putchar - function to display characters
 * @c: variable to ve manipulated
 * Return: 1 or 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

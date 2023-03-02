#include "main.h"
/**
 * main - check the code
 *
 * Return:0 Always
 */
int main(void)
{
	int r;

	r = 'a';
	_isalpha(r);
	r = 'o';
	_isalpha(r);
	r = 108;
	_isalpha(r);
	r = ';';
	_isalpha(r);
	return (0);
}

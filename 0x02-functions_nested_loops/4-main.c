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
	_isalpha('\n');
	r = 'o';
	_isalpha(r);
	_isalpha('\n');
	r = 108;
	_isalpha(r);
	_isalpha('\n');
	r = 'C';
	_isalpha(r);
	_isalpha('\n');

	return (0);
}

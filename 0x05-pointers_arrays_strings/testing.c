#include "main.h"

int _strlen(char *s)
{
	int i = 1;
	int number = 0;
	char j = s[0];

	while(j != '\0')
	{
		number ++;
	}
	return (number);
}

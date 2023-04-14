#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strcpy -function to copy contents of a string to the first cariable
 *
 * @dest: destination variable
 * @src: variable with original content
 * Return: dest variable
 */
int _len(char *s)
{
	int i;
	int len;

	i = 0;
	while (s[i] != '\0')
	{
		len = i + 1;
		i++;
	}
	return (len);
}

char *_strcpy(char *dest, char *src)
{
	int i;
	int len;
	int len1;
	char cpy;

	len = (_len(src));
	for (i = 0; src[i] != '\0'; i++)
	{
		 _putchar(src[i]);
	}

//	*dest = cpy;
	dest = src;
	return (dest);
}


int main(void)
{
	char s1[98];
	char *ptr;

	ptr = _strcpy(s1, "Copy this text");
	printf("%s\n", s1);
	printf("%s\n", ptr);
	return (0);
}

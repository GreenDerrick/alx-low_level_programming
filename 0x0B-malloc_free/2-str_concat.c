#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: variable to be manipulated
 * @s2: variable to be manipulated
 * Return: string concatenated
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int a;
	int len;
	int len1;
	int total;
	char *ptr;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		len = i;
	}
	len += 1;
	for (i = 0; s2[i] != '\0'; i++)
	{
		len1 = i;
	}
	len1 += 1;
	total = (len + len1) - 1;

	ptr = malloc(sizeof(char) * total);

	if (ptr == NULL)
		return (NULL);
	for (a = 0; ptr[a] != '\0'; a++)
	{
		while (s1[a] != '\0')
		{
			_putchar(s1[a]);
		}
		while (s2[a] != '\0')
		{
			_putchar(s2[a]);
		}
	}
	return (ptr);
}

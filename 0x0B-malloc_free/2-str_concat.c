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
	int j;
	int k;
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

	for (j = 0; j < len; j++)
	{
		ptr[j] = s1[j];
	}
	for (k = 0; k < len1; k++)
	{
		ptr[i + k] = s2[k];
	}
	ptr[j + k] = '\0';
	return (ptr);
}

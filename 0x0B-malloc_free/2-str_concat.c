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
	int i, j, k, len, len1, total;
	char *ptr;

	j = k = 0;
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

	ptr = malloc(sizeof(char) * total - 1);

	if (ptr == NULL)
		return (NULL);

	while (s1[j] != '\0')
	{
		ptr[j] = s1[j];
		j++;
	}
	while (s2[k] != '\0')
	{
		ptr[j] = s2[k];
		j++;
		k++;
	}
	ptr[j + k] = '\0';
	return (ptr);
}

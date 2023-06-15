#include <stdlib.h>
#include "main.h"
#include <stddef.h>
/**
 * string_nconcat - function to concatenate strings
 * @s1: variable to manipulate
 * @s2: variable to manpulate
 * @n: number of characters to print
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0, j = 0, len1 = 0, len = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len])
		len++;

	if (n < len)
		ptr = malloc(sizeof(char) * (len1 + n + 1));
	else
		ptr = malloc(sizeof(char) * (len1 + len + 1));

	if (!ptr)
		return (NULL);

	while (i < len1)
	{
		ptr[i] = s1[i];
		i++;
	}

	while (n < len && i < (len1 + n))
		ptr[i++] = s2[j++];

	while (n >= len && i < (len1 + len))
		ptr[i++] = s2[j++];

	ptr[i] = '\0';

	return (ptr);
}


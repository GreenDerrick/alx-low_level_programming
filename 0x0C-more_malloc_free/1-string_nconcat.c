#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * string_nconcat - concatenating strings
 * @s1: variable to be manipulated
 * @s2: variable to be manipulated
 * @n: variable to be manipulated
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len, len1, total, j, k;
	char *ptr;

	k = j = 0;
	if (s1 == NULL || s2 == NULL)
		return ("");
	for (i = 0; s1[i] != '\0'; i++)
	{
		len =  i + 1;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		len1 = i + 1;
	}
	total = (len + len1) + 1;
	ptr = malloc(sizeof(char) * total);
	if (ptr == NULL)
		return (NULL);
	while (s1[k] != '\0')
	{
		ptr[k] = s1[k];
		k++;
	}
	if (n >= len1)
	{
		while (s2[j] != '\0')
		{
			ptr[k] = s2[j];
			j++, k++;
		}
	}
	else if (n < len1)
	{
		while (s2[j] != s2[n])
		{
			ptr[k] = s2[j];
			j++, k++;
		}
	}
	return (ptr);
}

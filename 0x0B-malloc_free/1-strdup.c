#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup - function theat duplicated a string
 *
 * @str: variable to be manipulated
 * Return: string
 */

char *_strdup(char *str)
{
	int i;
	int a;
	int len;
	char *ptr;

	/**
	 * check if str is NULL
	 */

	if (str == NULL)
		return (NULL);
	/**
	 * find length of the string
	 */

	for (i = 0; str[i] != '\0'; i++)
	{
		len = i;
	}
	len = i + 1;

	/**
	 * allocate space to where we want to duplicate
	 */

	ptr = malloc(sizeof(char) * len);

	/**
	 * check if ptr is NULL
	 */

	if (ptr == NULL)
		return (NULL);

	/**
	 * if ptr != NULL
	 * copy the string
	 */

	for (a = 0; str[a] != '\0'; a++)
	{
		ptr[a] = str[a];
	}
	return (ptr);
}

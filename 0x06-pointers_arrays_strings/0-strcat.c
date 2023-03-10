#include "main.h"
/**
 * _strncat - concatenate strings 2
 *
 * Return: the strings
 * @src: pointer src
 * @dest: pointer dest
 */
char *_strncat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);

}

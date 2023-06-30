#include <stddef.h>
#include <lists.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - function that will printelements of strcuture
 * @h: variable to be manipulated
 * Return: count
 */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;

	if (h == NULL)
	{
		printf("No data present");
		exit(1);
	}
	while (h != NULL)
	{
		if (str == NULL)
		{
			printf("[0] (nil)"\n);
		}
		else
		{
			printf("[%u] ", h->len);
			printf("%s\n", h->str);
		}
		count++;
	}
	return (count);
}

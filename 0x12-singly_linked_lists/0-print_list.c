#include <stddef.h>
#include "lists.h"
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
	}
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] ", h->len);
			printf("%s\n", h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}

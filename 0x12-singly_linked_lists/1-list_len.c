#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * list_len - function that return number of elements in a list
 * @h: variable to be manipulated
 * Return: count
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;

	if (h == NULL)
	{
		printf("Empty input");
		exit(1);
	}
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that return the number of elements
 * @h: variable to be manipulated
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

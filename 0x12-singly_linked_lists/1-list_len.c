#include "main.h"
#include <stdio.h>
/**
 * list_len - function that returns a count of number of elements
 *
 * @h: variable to the struct
 * Return: count
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

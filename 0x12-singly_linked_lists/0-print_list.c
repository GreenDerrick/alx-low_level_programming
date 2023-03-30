#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: The number of nodes in h.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	
	while(h)
	{
		count++;
		h = h->next;
	}

	return (count);
}

#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * list_len - function that outputs the length of a list
 * @h: pointer h to a structure
 * Return: length of the structures
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	/* introduce a pointer head that will be used to show the start of a list*/
	const list_t *head;
	head = h;

	while(head != NULL)
	{
		count++;
		head =  head->next;
	}

	return (count);
}

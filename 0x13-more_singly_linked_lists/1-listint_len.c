#include "lists.h"

/**
 * listint_len - function that will print the number of elements in a list
 * @h: variabe to be manipulated
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

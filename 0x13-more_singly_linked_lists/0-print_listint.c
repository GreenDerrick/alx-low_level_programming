#include "lists.h"
/**
 * print_listint - prints all element of a list
 * @h: variable for the list
 * Return: number of nodes printed
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}

#include "lists.h"
/**
 * print - prints all element of a list
 * @h: variable for the list
 * Return: number of nodes printed
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	if (h == NULL)
		exit(1);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

#include "lists.h"
/**
 * listint_len - function that prints contents of elements in the list
 *
 * @h: variable to be manipulated
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	h = h->next;

	if (h == NULL)
	{
		return (1);
	}
	else
	{
		printf("%d\n", h->n);
		printf("%s\n", h->next);
	}

	return (count);
}

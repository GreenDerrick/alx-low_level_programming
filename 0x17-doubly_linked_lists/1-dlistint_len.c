#include "lists.h"
/**
 * dlistint_len - function that return the number of elemtns in a list
 * @h: variable name of the struct "dlistint"
 * Return: number of elements in a list
 */
size_t dlistint_len(const dlistint_t *h)
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

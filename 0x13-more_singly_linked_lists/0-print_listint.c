#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - function that prints contents of elements in the list
 *
 * @h: variable to be manipulated
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t count;
	listint_t *head;

	count = 0;
	head = h->next;

	if (head == NULL)
	{
		return (1);
	}
	else
	{
		printf("%d\n", h->n);
		head = h->next;
		count++;
	}
	h = h->next;
	if (h == NULL)
	{
		return (1);
	}
	else
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}

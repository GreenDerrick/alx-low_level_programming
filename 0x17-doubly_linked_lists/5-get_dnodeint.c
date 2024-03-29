#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t LL
 * @head: head of the DLL
 * @index: index
 * Return: Current Node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	dlistint_t *current = head;
	unsigned int a = 0;

	while (current != NULL)
	{
		if (a == index)
			break;
		current = current->next;
		a++;
	}
	return (current);
}

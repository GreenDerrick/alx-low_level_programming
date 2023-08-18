#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of the dlistint_t
 * @head: variable name to reference struct
 * @n: constant variable n to be added to the list
 * Return: address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *tmp;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else if (*head != NULL)
	{
		tmp = (*head);
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
		new->prev = tmp;
	}

	return (new);
}

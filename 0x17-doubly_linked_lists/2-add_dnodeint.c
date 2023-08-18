#include "lists.h"
/**
 * add_dnodeint - function to add a new node at the begining of the list
 * @head: variable name of the dlistint
 * @n: constant variable to be added
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		exit(1);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;
	return (*head);
}


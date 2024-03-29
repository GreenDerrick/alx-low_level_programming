#include "lists.h"
/**
 * add_nodeint - function that adds a new node tothe beginning of a list
 * @head: variable to be manipulated
 * @n: variable to be  manipulated
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
	free(new);
}

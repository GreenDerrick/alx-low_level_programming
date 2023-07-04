#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of the list
 * @head: variable to the struct
 * @n: variable to be manipulated
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *curr;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		printf("No memory allocated");
		exit(1);
	}
	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		curr = *head;
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = temp;
	}

	return (*head);
	free(temp);
}

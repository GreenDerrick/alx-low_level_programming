#include "lists.h"
/**
 * free_listint2 - function that frees a list
 * @head: pointer to a pointer
 * Return: no return
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *next;

	temp = *head;
	if (head == NULL)
		exit(1);
	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
	*head = NULL;
}

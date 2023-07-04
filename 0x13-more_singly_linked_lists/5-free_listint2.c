#include "lists.h"
/**
 * free_listsint2 - function that frees a list
 * @head: pointer to a pointer
 * Return: no return
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(head);
		*head = temp;
	}
}

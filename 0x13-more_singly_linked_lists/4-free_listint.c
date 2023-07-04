#include "lists.h"
/**
 * free_listint - function that frees a list
 * @head: variable to be manipulated
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;
	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

#include "lists.h"
/**
 * free_listint - function that frees a list
 * @head: variable to be manipulated
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
	{
		printf("No memory allocated");
		exit(1);
	}
	head = temp;
	free(head);
}

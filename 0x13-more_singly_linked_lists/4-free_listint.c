#include "lists.h"
/**
 * free_listint - function that frees a list
 * @head: variable to be manipulated
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		printf("No memory allocated");
		exit(1);
	}
	free(head);
}

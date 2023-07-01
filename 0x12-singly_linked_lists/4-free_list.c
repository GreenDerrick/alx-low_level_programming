#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * free_list - function that frees a list
 * @head: name of list
 * Return: nothing
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		printf("No memory allocated");
		exit(1);
	}
	while (head != NULL)
	{
		head = head->next;
		free(head);
	}
}

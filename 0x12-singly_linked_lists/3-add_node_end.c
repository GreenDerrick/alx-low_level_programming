#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end - function that adds a node to the end of the list
 * @head: name of new structure
 * @str: string to be duplicated
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *curr;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		printf("No data allocated");
		exit(1);
	}
	new_node->len = strlen(str);
	new_node->str = strdup(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		curr = *head;
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = new_node;
	}
	return (*head);
	free(new_node);
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - function that adds a new node to beginnig of a list
 * @head: variable to be manipulated
 * @str: variable to be manipulated
 * Return: address of new_node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	while (new_node != NULL)
	{
		new_node->str = strdup(str);
		new_node->next = *head;
		*head = new_node;
	}
	return (*head);
}

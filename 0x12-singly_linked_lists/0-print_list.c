#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - function that prints contents of a linked list
 * 
 * @h: variable of the structure
 * Return: size of the contents
 */
size_t print_list(const list_t *h)
{
	if (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0]");
		}
		else
		{
			printf("%s\n", h->str);
		}
		printf("%d\n", h->len);
	}
}

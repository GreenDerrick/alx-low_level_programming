#include "lists.h"
/**
 * print_dlistint - function to print everything in a list
 * @h: variabe name for the struct dlistint_t
 * Return: size_t(return how many times program will go through the loop)
 */
size_t print_dlistint(const dlistint_t *h)
{
	int age;
	size_t count;

	count = 0;
	if (h == NULL)
	{
		printf("No memory allocated");
		return (count);
		exit(1);
	}
	while (h)
	{
		age = h->n;
		printf("%d\n", age);
		count++;
		h = h->next;
	}
	return (count);
}

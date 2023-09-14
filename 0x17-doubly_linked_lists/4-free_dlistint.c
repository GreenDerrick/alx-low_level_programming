#include "lists.h"
/**
 * free_dlistint - free DLL
 * @head: head of the DLL
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp0 = head;
	dlistint_t *tmp2 = NULL;

	while (tmp)
	{
		tmp2 = tmp0->next;
		free(tmp0);
		tmp0 = tmp2;
	}
}

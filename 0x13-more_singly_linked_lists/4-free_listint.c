#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: the reference to the first node in the linked list
 * @listint_t - the linked list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}

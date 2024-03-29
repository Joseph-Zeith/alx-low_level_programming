#include "lists.h"

/*
 * free_listint2 -  frees a listint_t list.
 * @head: listint_t to be freed
 *
 * Return: head equalling to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;
	while (*head)
	{
		ptr = (*head)->next;
		free(*head);
		(*head) = ptr;
	}
	head = (NULL);
}


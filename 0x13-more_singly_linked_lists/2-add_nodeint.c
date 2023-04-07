#include "lists.h"

/**
 * *add_nodeint - adds a new node at the beginning of a listint_t list
 * @head - the reference to the first node in a list
 * @n: the node to be added
 *
 * return: &n on success and NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_ptr;

	new_ptr = malloc(sizeof(listint_t));
	if (!new_ptr)
		return (NULL);
	new_ptr->n = n;
	new_ptr->next = *head;
	*head = new_ptr;
	return (new_ptr);
}

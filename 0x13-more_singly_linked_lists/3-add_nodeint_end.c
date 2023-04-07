#include "lists.h"

/**
 * *add_nodeint_end - adds a new node at the end of a listint_t list
 * @head:  a reference to the first node of the list
 * @n: the content of the data in the node to be inserted at the end
 *
 * Return: the address of the inserted node on success and NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *addnode;

	addnode = malloc(sizeof(listint_t));
	if (!addnode)
		return (NULL);
	addnode->n = n;
	if (*head == NULL)
	{
		addnode->next = NULL;
		*head = addnode;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = addnode;
		addnode->next = NULL;
	}
	return (addnode);
}


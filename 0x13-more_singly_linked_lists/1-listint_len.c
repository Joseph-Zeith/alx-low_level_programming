#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: the linked list of kind listint to traverse
 *
 * return: the number of nodes in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t digit = 0;

	while (h)
	{
		digit++;
		h = h->next;
	}
	return (digit);
}

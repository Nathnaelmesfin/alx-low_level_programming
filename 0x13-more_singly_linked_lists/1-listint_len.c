#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list
 * @h: pointer to the head of list
 *
 * Return: numbers of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		nnodes++;
		h = h->next;
	}
	return (nnodes);
}

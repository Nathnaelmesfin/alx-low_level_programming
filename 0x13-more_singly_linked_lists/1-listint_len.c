#include "lists.h"
#include <stdio.h>
/**
 * listint_len - returns no of elements in a linked list.
 * 
 * @h: head of list.
 *
 * Return: no of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t hnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		hnodes++;
	}
	return (hnodes);
}

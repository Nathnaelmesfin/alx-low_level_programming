#include "lists.h"

/**
 * print_listint - prints all elements of a list.
 * @h: head of list.
 *
 * Return: no of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t hnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		hnodes++;
	}
	return (hnodes);
}

#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * listint_len - returns no of elements in a linked list.
 * 
 * @h: head of list.
 *
 * Return: no of nodes.
 */
typedef struct listint_s {
    int data;
    struct listint_s *next;
} listint_t;

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
    const listint_t *current = h;

    while (current != NULL) {
        count++;
        current = current->next;
    }

    return count;
}

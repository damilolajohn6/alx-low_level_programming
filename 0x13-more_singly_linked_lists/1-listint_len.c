#include "lists.h"

/**
 * listint_len - fn to get the no of elements in a singly linked list
 *
 * @h: head of a singly linked list
 *
 * Return: no of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}

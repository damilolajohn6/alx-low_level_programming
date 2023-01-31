#include "lists.h"

/**
*free_listint - frees a linked list
*@head: head of the list
*
*Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *temp_ptr;

	while (head != NULL)
	{
		temp_ptr = head->next;

		free(head);
		head = temp_ptr;
	}
}

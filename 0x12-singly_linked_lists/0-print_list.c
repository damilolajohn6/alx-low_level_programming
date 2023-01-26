#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * print_list - function to print members of a linked list
 * @h: pointer to the 1st membe of the linked list(head)
 * Return: sze of the linked list
 */

size_t print_list(const list_t *h)
{
const list_t *cursor = h;
size_t count = 0;

while (cursor != NULL)
{
if (cursor->str != NULL)
printf("[%d] %s\n", cursor->len, cursor->str);
else
printf("[0] (nil)\n");
count += 1;
cursor = cursor->next;
}

return (count);
}

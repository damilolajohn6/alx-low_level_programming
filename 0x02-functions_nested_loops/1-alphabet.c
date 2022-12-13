#include "main.h"

/**
* print_alphabet - prints alphabets in lowercase
*
* Return: Returns void.
*/

void print_alphabet(void)
{
char lower = 'a';
char end = 'z';

while (lower <= end)
_putchar(lower++);
_putchar('\n');
lower++;

}

#include "main.h"
/**
* print_alphabet_x10 - print letters a-z times 10
*
* Return: Returns void.
*/

void print_alphabet_x10(void)
{
int x = 1;

while (x <= 10)
{
char start = 'a';
char stop = 'z';
while (start <= stop)
_putchar(start++);
x++;
_putchar('\n');
}
}

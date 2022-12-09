#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char low, f, g;

e = 'e';
q = 'q';

for (low = 'e'; low <= 'z'; low++)
{
if (low != e && low != q)
putchar(low);
}
putchar('\n');

return (0);
}

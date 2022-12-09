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

f = 'e';
g = 'q';

for (low = 'e'; low <= 'z'; low++)
{
if (low != f && low != q)
putchar(low);
}
putchar('\n');

return (0);
}

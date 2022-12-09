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

f = 'f';
g = 'g';

for (low = 'a'; low <= 'z'; low++)
{
if (low != f && low != g)
putchar(low);
}
putchar('\n');

return (0);
}

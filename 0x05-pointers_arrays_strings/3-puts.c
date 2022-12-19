#include "main.h"

/**
 * _puts - prints each character of a string
 * @str: input string
 * Returns: void
 */
void _puts(char *str)
{
	int num = 0;

	while (str[num] != '\0')
	{
		_putchar(str[num]);
		num++;
	}
	_putchar('\n');
}

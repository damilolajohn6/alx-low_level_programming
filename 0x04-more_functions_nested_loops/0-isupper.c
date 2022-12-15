#include "main.h"

/**
 *  _isupper - checks if c is upper case.
 * @c: input character
 * Return: Returns 1 if c is upper otherwise 0
 */

int _isupper(int c)
{
	char upper = 'A';

	while (upper <= 'Z')
	{
		if (c == upper)
			return (1);
		upper++;
	}

	return (0);
}

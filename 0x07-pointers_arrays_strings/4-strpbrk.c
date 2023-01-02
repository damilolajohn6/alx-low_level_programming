#include "main.h"
/**
 * _strpbrk - locates the first occurrence in the string s of any of
 * the bytes in the string accept.
 * @s: string to pick char
 * @accept: string to compare to
 * Return: string pointer
 */

char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}

		accept = start;
		s++;
	}
	return (NULL);
}

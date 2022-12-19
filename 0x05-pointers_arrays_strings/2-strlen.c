#include "main.h"

/**
 * _strlen - checks length of string
 * @s: input character
 * Return: Always 0
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;

	return (a);
}

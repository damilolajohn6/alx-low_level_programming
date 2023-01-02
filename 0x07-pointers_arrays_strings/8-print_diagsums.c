#include "main.h"
#include <stdio.h>

/**
 *  * print_diagsums - a function that prints the sum of the two diagonals
 *   * of a square matrix of integers.
 *    * @a: a square matrix of integers
 *     * @size: an input integer with the size of matrix
 *      * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int i, j, p, l = 0, r = 0;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		l += *(a + p);
	}
	for (j = 0; j < size; j++)
	{
		p = (j * size) + (size - 1 - j);
		r += *(a + p);
	}
	printf("%i, %i\n", l, r);
}

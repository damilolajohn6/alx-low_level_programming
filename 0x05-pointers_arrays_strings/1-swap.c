#include "main.h"

/**
 * swap_int - swapping address of two pointers
 *@a: pointer address
 *@b: pointer address
 * Returns: Nada!
 */

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}

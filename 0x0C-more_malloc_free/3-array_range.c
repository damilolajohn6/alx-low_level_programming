#include <stdlib.h>
#include "main.h"
/**
 *   *array_range - creates an array of integers.
 *     *@min: minimum value.
 *       *@max: maximum value.
 *         *
 *           *Return: pointer to newly created array.
 *             *NULL if malloc fails.
 *               *NULL if min > max.
 */

int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}

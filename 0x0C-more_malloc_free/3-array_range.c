#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max.
 * @min: The minimum value in the array.
 * @max: The maximum value in the array.
 *
 * Return: A pointer to an integer array containing values from min to max.
 * If min is greater than max or if memory allocation fails, it returns NULL.
 */
int *array_range(int min, int max)
{
	int i, size = (max - min) + 1;
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = (int *)malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}


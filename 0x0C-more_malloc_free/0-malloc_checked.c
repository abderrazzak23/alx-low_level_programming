#include <stdlib.h>
#include "main"
/**
 * malloc_checked - Allocates memory using malloc and checks for allocation failure.
 * @b: The size of memory to allocate.
 *
 * Return: A pointer to the allocated memory.
 *         If allocation fails, the program exits with status 98.
 */
void *malloc_checked(unsigned int b)
{
	void *array = malloc(b);

	if (array == NULL)
		exit(98);

	return (array);
}

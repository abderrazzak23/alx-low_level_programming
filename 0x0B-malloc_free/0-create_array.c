#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - array of chars
 * @size: size of the array ,arg
 * @c: character
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *myArray;
	unsigned int i = 0;

	myArray = malloc(size * sizeof(c));

	while (i < size)
	{
		if (myArray == NULL)
		{
			return (NULL);
		}
		myArray[i] = c;
		i++;
	}
	return (myArray);
}

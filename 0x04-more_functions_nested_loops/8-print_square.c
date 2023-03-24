#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 * @size: Input
 * Return: Always 0
 */
void print_square(int size)
{
	int rows;
	int cols;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (rows = 0; rows < size; rows++)
		{
			for (cols = 0; cols < size; cols++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

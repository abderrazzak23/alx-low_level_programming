#include "main.h"
/**
 * is_sqrt - Checks for the sqrt root of b.
 * @g: guess for the sqrt
 * @b: number to find sqrt of
 * Return: -1 if the sqrt is too high or the sqrt of b
 */

int is_sqrt(int g, int b)
{
	if (g * g  == b)
		return (g);
	if (g * g > b)
		return (-1);
	return (is_sqrt(g + 1, b));
}
/**
 * _sqrt_recursion - returns the squart root of a given number
 *
 * @n: integer to find sqrt of
 *
 * Return: natural sqrt root OR -1.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (is_sqrt(1, n));
}

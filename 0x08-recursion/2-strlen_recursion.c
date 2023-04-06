#include "main.h"
/**
 * _strlen_recursion - return length of string
 * @s: string
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\n')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

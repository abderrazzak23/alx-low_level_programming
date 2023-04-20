#include<stdio.h>
#include<stdlib.h>
#include"function_pointers.h"
/**
 * print_name - prints a name depends of the function.
 * @name: points to name's string.
 * @f: points to function.
 *
 * Return: the string initialised.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}

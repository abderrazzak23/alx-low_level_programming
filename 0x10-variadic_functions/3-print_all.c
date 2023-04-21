#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints all the given strings.
 * @separator: define character to separate the strings.
 * @n: number of strings to be printed.
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i = 0;
	char *s;

	va_start(arguments, n);

	while (i < n)
	{
		s = va_arg(arguments, char *);

		if (s == NULL)
			s = "(nil)";

		printf("%s", s);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);

		i++;
	}

	printf("\n");
	va_end(arguments);
}


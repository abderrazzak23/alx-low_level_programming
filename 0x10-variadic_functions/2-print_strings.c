#include "variadic_functions.h"

/**
 * print_strings - prints strings with separator
 * @separator: the string separator
 * @n: the number of arguments
 * @...: the strings to print
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *sep, *current_string;
	unsigned int i;
	va_list args;

	if (separator == NULL || *separator == '\0')
		sep = "";
	else
		sep = (char *)separator;

	va_start(args, n);

	if (n > 0)
		printf("%s", va_arg(args, char *));

	for (i = 1; i < n; i++)
	{
		current_string = va_arg(args, char *);

		if (current_string == NULL)
			current_string = "(nil)";

		printf("%s%s", sep, current_string);
	}

	printf("\n");
	va_end(args);
}


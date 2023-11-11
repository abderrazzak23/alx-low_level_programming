#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct funckey - a key for picking functions to use for printing
 * in 3-print_all.c
 *
 * @f: function to use for printing
 * @spec: character specifier
 */
typedef struct funckey
{
	void (*f)(va_list);
	char spec;
} funckey;

#endif
#endif

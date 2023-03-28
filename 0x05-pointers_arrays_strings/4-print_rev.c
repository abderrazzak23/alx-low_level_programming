#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string
 * return: 0;
 */
void print_rev(char *s)
{
	int leng;
	int x;

	while (*s != '\0')
	{
		leng++;
		s++;
	}
	s--;
	for (x = leng; x > 0; x--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

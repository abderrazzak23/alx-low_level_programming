#include "main.h"
/**
 * print_numbers - print 0 to 9.using putchar twice
 * Return: void.
 */
void print_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}

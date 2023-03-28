#include "main.h"
/**
 * puts2 - function that prints only one of two
 * characters starting with the first
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int leng = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		leng++;
	}
	t = leng - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}

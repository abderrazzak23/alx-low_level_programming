#include <stdio.h>

/**
 * main - function has two arguments
 * @argc: counter of num of args
 * @argv: pointer to array of strings
 * Return: zero
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}

#include <stdio.h>

/**
 * main - function with two args
 * @argc: int argument , counter
 * @argv: char pointer
 * Return: 0
 */

int main(int argc, char *argv[])
{
	for (int i = 1; i < argc - 1; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

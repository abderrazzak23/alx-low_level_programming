#include <stdio.h>

/**
 * main - function with two args
 * @argc: int argument , counter
 * @argv: char pointer
 * Return: 0
 */

int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

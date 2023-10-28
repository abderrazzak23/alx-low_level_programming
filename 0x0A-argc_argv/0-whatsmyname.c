#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - function that print the file name
 * @argc: counter of the arguments passed to the program
 * @argv: an array of  pointers to the stirngs
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}

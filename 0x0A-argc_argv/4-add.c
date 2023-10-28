#include <stdio.h>
#include <stdlib.h>

/**
 * main - function has two args
 * @argc: 1st arg int counter
 * @argv: array
 * Return: sum of int values
 */

int main(int argc, char *argv[])
{
	int i, j, res;

	res = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] >= '0' && argv[i][j] <= '9')
				{
					continue;
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			res += atoi(argv[i]);
		}
		printf("%d\n", res);
	}
	else
		printf("0\n");
	return (0);
}

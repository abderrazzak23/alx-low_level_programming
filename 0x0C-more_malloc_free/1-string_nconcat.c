#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - Concatenates two strings with a limited
 * number of characters from the second string.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of characters from s2 to concatenate.
 *
 * Return: A newly allocated string containing the concatenated result,
 *         or NULL if memory allocation fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result = NULL;
	unsigned int i = 0, j = 0, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	if (n < j)
		j = n;

	result = malloc((i + j + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		result[k] = s1[k];

	i = k;

	for (k = 0; k < j; k++, i++)
		result[i] = s2[k];

	result[i] = '\0';

	return (result);
}


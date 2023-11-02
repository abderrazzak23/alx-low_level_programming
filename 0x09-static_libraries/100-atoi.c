/**
 * _atoi - Convert a string representation of an integer to an integer.
 * @s: String possibly containing an integer.
 *
 * Return: The first integer in the string.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int sum = 0;
	int result = 0;

	for (; *s != '\0'; s++)
	{
		if (*s == '-')
			sign = -1;
		else if (*s >= '0' && *s <= '9')
			break;
	}

	while (*s >= '0' && *s <= '9')
	{
		sum = sum * 10 + (*s - '0');
		s++;
	}

	if (sign == -1)
		result = -sum;
	else
		result = sum;

	return (result);
}

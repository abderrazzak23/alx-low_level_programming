#include "main.h"

/**
 * is_prime_recursive - check if number is prime recursively.
 * @candidate: the candidate to check for primality
 * @divider: the checked divider
 * Return: 0 if number not prime , 1 if the number is prime
 */
int is_prime_recursive(int candidate, int divider)
{
	if (divider == candidate - 1)
		return (1);
	if (candidate % divider == 0)
		return (0);

	return (is_prime_recursive(candidate, divider + 1));
}

/**
 * is_prime_number - function returns 1 if number is prime
 * or 0 is otherwise
 * @n: the number to check
 * Return: 1 if number is prime , otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_recursive(n, 2));
}

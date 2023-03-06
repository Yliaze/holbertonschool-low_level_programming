#include "main.h"

/**
 * find_prime - a function that find if n is a prime number
 *
 *@n: number to verify
 *@i: number to test for division with @n
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int find_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (find_prime(n, i - 1));
}

/**
 *is_prime_number - test if the number is a prime number
 *
 *@n: integer to test
 *
 *Return: 1 if @n is a prime number, else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (find_prime(n, n - 1));
}

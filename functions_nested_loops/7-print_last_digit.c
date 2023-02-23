#include "main.h"
/**
 * print_last_digit - Prints the last digit
 * of a number.
 *
 * @n: The input number as an integer.
 *
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int ldigit = (n % 10);

	if (ldigit >= 0)
	{
		_putchar(48 + ldigit);
		return (ldigit);
	}
	else
	{
		_putchar(48 - ldigit);
		return (-ldigit);
	}
}

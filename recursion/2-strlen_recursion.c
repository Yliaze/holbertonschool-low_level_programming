#include "main.h"
/**
 * _print_rev_recursion - a function that prints a string
 * in reverse
 *
 * @s: string input
 *
 * Return: returns string in reverse
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

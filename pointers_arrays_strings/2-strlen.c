#include "main.h"
/**
 * _strlen - function that returns the length of a string.
 *
 * @s: string input
 *
 * Return: returns the length of a string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

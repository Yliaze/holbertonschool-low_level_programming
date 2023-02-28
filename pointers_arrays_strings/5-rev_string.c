#include "main.h"
#include "_putchar.c"
/**
 * rev_string - a function that reverse a string.
 *
 * @s: string input
 *
 * Return: returns string
 */
void rev_string(char *s)
{
	int count = 0;
	int i = 0;
	int temp = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	count = count - 1;
	while (i < count)
	{
		temp = s[i];
		s[i] = s[count];
		s[count] = temp;
		count--;
		i++;
	}
}

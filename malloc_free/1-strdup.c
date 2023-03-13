#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to
 * a newly allocated space in memory, which
 * contains a copy of the string given as a parameter
 *
 * @str: string
 *
 * Return: NULL or char
 */
char *_strdup(char *str)
{
	int i;
	int size;
	char *p;

	if (str == 0)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	size = i + 1;

	p = malloc(sizeof(char) * size);

	if (p == 0)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		p[i] = str[i];
	}
	return (p);
}

#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 *
 * @s1: string one
 * @s2: string two
 *
 * Return: NULL or char
 */
char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	int i;
	int j;
	int size;
	char *p;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	for (len1 = 0; s1[len1] != '\0'; len1++)
	for (len2 = 0; s2[len2] != '\0'; len2++)
	size = (len1 + (len2 + 1));
	p = malloc(sizeof(char) * size);
	if (p == 0)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; s2[j]; j++)
	{
		p[i + j] = s2[j];
	}
	p[i + j] = '\0';
	return (p);
}

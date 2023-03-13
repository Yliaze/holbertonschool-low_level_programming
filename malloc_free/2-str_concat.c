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
	p = malloc(sizeof(char) * (len1 + len2 + 1));
	if (p == 0)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j <= len2; i++, j++)
	{
		p[i] = s2[j];
	}
	return (p);
}

#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: number of the first bytes of s2
 *
 * Return: the pointer to the 2 strings concatenated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1;
	unsigned int len2;
	unsigned int i;
	unsigned int j;
	unsigned int size;
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
			size = (len1 + n + 2);

	if (n >= len2)
		n = len2;

	p = malloc(sizeof(char) * size);

	if (p == 0)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j <= n; j++)
	{
		p[i + j] = s2[j];
	}
	p[i + j] = '\0';
	return (p);
}

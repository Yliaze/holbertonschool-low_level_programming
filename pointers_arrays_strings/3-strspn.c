#include "main.h"
/**
 * _strspn - return length of string
 * that matches values consistently
 *
 * @s: string to search
 * @accept: target matches
 *
 * Return: number of bytes consecutively matched
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int l = 0;
	int len = 0;
	int count = 0;

	for (l = 0; accept[l] != '\0'; l++)
	{
		len = l;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		int j = 0;
		int found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count = (count + 1);
				found = 1;
			}
			if (found == 0 && len == j)
			{
				return (count);
			}
		}
	}
	return (count);
}

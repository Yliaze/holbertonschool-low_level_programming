#include "main.h"
/**
 * leet - a function that encodes a string into 1337.
 * Letters a and A should be replaced by 4...
 *
 * @s: string input
 *
 * Return: 0
 */
char *leet(char *s)
{
	int i = 0;
	int find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int rep[] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};

	while (s[i] != '\0')
	{
		int j = 0;

		while (j < 10)
		{
			if (s[i] == find[j])
			{
				s[i] = rep[j] + '0';
			}
			j++;
		}
		i++;
	}
	return (s);
}

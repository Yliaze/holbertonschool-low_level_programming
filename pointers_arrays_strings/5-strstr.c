#include "main.h"
/**
 * _strstr - function that  that locates a substring
 *
 * @needle: string to search
 * @haystack: target matches
 *
 * Return: a pointer to the beginning of the
 * located substring or NULL if no such byte is found.
 */
char *_strstr(char *haystack, char *needle)
{
	int length = 0;
	int i = 0;

	while (needle[length] != '\0')
	{
		length++;
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		int j = 0;

		for (j = 0; j <= length; j++)
		{
			if (j == length)
			{
				return (haystack + i);
			}
			else if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
	}
	return (NULL);
}

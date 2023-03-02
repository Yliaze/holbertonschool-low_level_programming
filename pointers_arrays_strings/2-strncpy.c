#include "main.h"
/**
 * _strncpy - function that copies a string
 *
 * @dest: copy to
 * @src: copy from
 * @n: The number chars from src to be copie to dest
 *
 * Return: result string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

#include "main.h"
/**
 * _strncat - function that concatenates two strings
 *
 * @dest: copy to
 * @src: copy from
 * @n: The number of bytes from src to be appended to dest
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int i = 0;

	while (dest[count] != '\0')
	{
		count++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[count + i] = src[i];
	}
	dest[count + i] = '\0';

	return (dest);
}

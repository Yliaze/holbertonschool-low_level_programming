#include "main.h"
/**
 * _strcat - function that concatenates two strings
 *
 * @dest: copy to
 * @src: copy from
 * @n: input of max bytes to be used
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
    int n dest_len = strlen(dest);
    size_t i;

    for (i = 0 ; i < n && src[i] != '\0' ; i++)
    {
        dest[n + i] = src[i];
    }
    dest[n + i] = '\0';

    return dest;
}

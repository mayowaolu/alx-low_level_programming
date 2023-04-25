#include "main.h"
/**
 * _strncat - concatenates two strings using at most n bytes
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *original_dest = dest;

	while (*dest != '\0')
		dest++;

	i = 0;
	while (i < n && *src != '\0')
	{
		*dest++ = *src++;
		i++;
	}
	*dest = '\0';

	return (original_dest);
}

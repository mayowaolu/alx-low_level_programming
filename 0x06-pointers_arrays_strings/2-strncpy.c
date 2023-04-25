#include "main.h"
/**
 * _strncpy - copies two strings using at most n bytes
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *original_dest = dest;

	i = 0;
	while (i < n && *src != '\0')
	{
		*dest++ = *src++;
		i++;
	}
	while (i < n)
	{	
		*dest++ = '\0';
		i++;
	}

	return (original_dest);
}

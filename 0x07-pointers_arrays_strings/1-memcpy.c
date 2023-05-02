#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: pointer to dest string
 * @src: pointer to source memory area
 * @n: number of bytes
 *
 * Return: pointer to s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *new = dest;

	for (i = 0; i < n; i++)
	{
		*dest++ = *src++;
	}
	return (new);
}

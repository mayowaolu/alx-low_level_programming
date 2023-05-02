#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to string
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *new = s;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	return (new);
}

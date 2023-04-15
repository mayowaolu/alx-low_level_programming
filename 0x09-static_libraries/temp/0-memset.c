#include "main.h"

/**
 * _memset - Fill memory with a constant byte
 * @s: the buffer array
 * @b: the constant byte
 * @n: the number of bytes of memory area that will be filled
 * Description: Fill the first `n` bytes of the memory area pointed to by `s`
 * with the constant byte `b`.
 * Return: Pointer to memory area `s`
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}

	return (s);
}

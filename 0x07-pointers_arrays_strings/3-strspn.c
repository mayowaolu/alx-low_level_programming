#include "main.h"

/**
 * _strspn - searches a string for a set of bytes
 * @s: the char string array
 * @accept: the char array to check bytes with
 * Return: Number of bytes in the intial segment of `s`
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int n;

	i = 0;
	n = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (n);
}

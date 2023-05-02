#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	char *a, *b, *c;

	for (b = haystack; *b != '\0'; b++)
	{
		c = b;
		for (a = needle; *a != '\0'; a++)
		{
			if (*b != *a)
				break;
			b++;
		}
		if (*a == '\0')
			return (c);
		b = haystack++;
	}
	return (NULL);
}

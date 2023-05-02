#include "main.h"
/**
 * _strspn - gets length of a prefix subtring
 * @s: pointer to string
 * @accept: substring
 *
 * Return: length of substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int len = 0;
	char *a;

	while (*s != '\0')
	{
		a = accept;
		while (*a != '\0')
		{
			if (*s == *a)
			{
				len++;
				break;
			}
			a++;
		}
		if (*a == '\0')
			return (len);
		s++;
	}
	return (len);
}

#include "main.h"
/**
 * string_toupper - change lowercase letters to upper
 * @c: string
 *
 * Return: string
 */

char *string_toupper(char *c)
{
	char *orig_str = c;

	while (*c != '\0')
	{
		if (*c >= 97 && *c <= 122)
			*c -= 32;
		c++;
	}

	return (orig_str);
}

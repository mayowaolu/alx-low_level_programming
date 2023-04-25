#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string
 *
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	char *orig_str = s;

	if (*s >= 97 && *s <= 122)
		*s -= 32;

	s++;

	while (*s != '\0')
	{
		if (*s == ' ' || *s == '\t' || *s == '\n' || *s == ',' ||
		*s == ';' || *s == '.' || *s == '!' || *s == '?' ||
		*s == '"' || *s == '(' || *s == ')' || *s == '}' || *s == '}')
		{
			if (*(s + 1) >= 97 && *(s + 1) <= 122)
				*(s + 1) -= 32;
		}
		s++;
	}

	return (orig_str);
}

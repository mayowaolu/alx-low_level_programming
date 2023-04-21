#include "main.h"
/**
 * _puts - prints a string, followed ny new line
 * @str: string
 */

void _puts(char *str)
{
	int i;
	char *s;

	s = str;
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

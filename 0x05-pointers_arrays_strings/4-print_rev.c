#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string
 */

void print_rev(char *s)
{
	int i, j;

	j = 0;
	while (s[j] != '\0')
		j++;

	i = j - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string
 */

void print_rev(char *s)
{
	int j;

	j = 0;
	while (s[j] != '\0')
		j++;

	while (j > 0)
	{
		_putchar(s[j - 1]);
		j--;
	}
	_putchar('\n');
}

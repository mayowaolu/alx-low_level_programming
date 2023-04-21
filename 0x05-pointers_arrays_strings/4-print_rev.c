#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string
 */

void print_rev(char *s)
{
	int i, j;

	j = 0;
	for (i = 0; s[i] != '\0'; i++)
		j++;

	while (j >= 0)
	{
		_putchar(s[j-1]);
		j--;
	}
	_putchar('\n');
}

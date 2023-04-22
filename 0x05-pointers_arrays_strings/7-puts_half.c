#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string
 */

void puts_half(char *str)
{
	int len, n;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
		n = len / 2;
	else
		n = ((len - 1) / 2) + 1;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}

	_putchar('\n');
}

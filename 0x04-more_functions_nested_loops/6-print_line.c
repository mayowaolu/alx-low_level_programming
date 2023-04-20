#include "main.h"
/**
 * print_line - draws a straight line in terminal
 * @n: number of _ to be printed
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}

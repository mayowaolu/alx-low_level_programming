#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of \ to be printed
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		i = 1;
		while (i <= n)
		{
			if (i != 1)
			{
				j = 1;
				while (j < i)
				{
					_putchar(' ');
					j++;
				}
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}

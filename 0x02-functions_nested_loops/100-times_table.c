#include "main.h"
/**
 * print_times_table - prints n times table
 * @n: number of times table to print
 */

void print_times_table(int n)
{
	int i, j, k;

	i = 0;
	if (n <= 15 && n >= 0)
	{
		while (i <= n)
		{
			_putchar('0');
			j = 1;
			while (j <= n)
			{
				k = i * j;
				_putchar(',');
				_putchar(' ');
				if (k < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				}
				else if (k >= 10 && k < 100)
				{
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
				else if (k >= 100)
				{
					_putchar((k / 100) + '0');
					_putchar((k / 10 % 10) + '0');
					_putchar((k % 10) + '0');
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}

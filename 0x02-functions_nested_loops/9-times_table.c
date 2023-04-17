#include "main.h"
/**
 * times_table - prints 9 times table
 */

void times_table(void)
{
	int i, j, k;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			k = i * j;
			if (j == 0 && k == 0)
			{
				_putchar(k + '0');
			}
			else if (j > 0 && k < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (j > 0 && k >= 10)
			{
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}

			if (j < 9)
				_putchar(',');
			else
				_putchar('\n');

			j++;
		}
		i++;
	}
}

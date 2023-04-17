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
			if (k <= 9)
			{
				_putchar(k + '0');
			}
			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			if ((j < 9) && (k < 10))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if ((j < 9) && (k > 9))
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
			j++;
		}
		i++;
	}
}

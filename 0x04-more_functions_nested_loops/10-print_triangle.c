#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		i = 0;
		while (i < size)
		{
			if (size > 1)
			{
				j = size - 1;
				while (j > i)
				{
					_putchar(' ');
					j--;
				}
			}
			k = 0;
			while (k <= i)
			{
				_putchar('#');
				k++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}

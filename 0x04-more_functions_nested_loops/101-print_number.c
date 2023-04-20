#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer
 */

void print_number(int n)
{
	int d, x;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	d = 1;
	while (n / d > 9)
	{
		d = d * 10;
	}

	while (d > 0)
	{
		x = n / d;
		_putchar(x + '0');
		n = n % d;
		d = d / 10;
	}
}

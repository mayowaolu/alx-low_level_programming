#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer
 */

void print_number(int n)
{
	int d, x;
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = n * -1;
	}
	else
		num = n;

	d = 1;
	while (num / d > 9)
	{
		d = d * 10;
	}

	while (d > 0)
	{
		x = num / d;
		_putchar(x + '0');
		num = num % d;
		d = d / 10;
	}
}

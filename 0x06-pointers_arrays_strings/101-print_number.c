#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer
 */

void print_number(int n)
{
	unsigned int num;
	int divisor;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;

	divisor = 1;
	while (num / divisor > 9)
	{
		divisor *= 10;
	}

	while (divisor != 0)
	{
		_putchar((num / divisor) + '0');
		num %= divisor;
		divisor /= 10;
	}
}

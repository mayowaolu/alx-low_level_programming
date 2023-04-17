#include "main.h"
/**
 * print_last_digit - prints last digit of number
 * @n: number
 *
 * Return: valueof last digit
 */

int print_last_digit(int n)
{
	int d;

	d = n % 10;

	if (n < 0)
	{
		d = d * -1;
	}
	_putchar(d + '0');
	return (d);
}

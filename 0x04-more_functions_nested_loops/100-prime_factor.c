#include <stdio.h>
/**
 * main - entry block
 *
 * Return: 0
 */

int main(void)
{
	long n, f;

	n = 612852475143;

	f = 2;

	while (n > 1)
	{
		while (f <= n)
		{
		if (n % f == 0)
		{
			n = n / f;
		}
		else
		{
			f++;
		}
		}
	}

	printf("%lu\n", f);


	return (0);
}

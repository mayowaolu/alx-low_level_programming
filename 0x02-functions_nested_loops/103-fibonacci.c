#include "main.h"
#include <stdio.h>
/**
 * main - entry block
 * Description: prints the first 50 fibonacci numbers
 *
 * Return: (0)
 */

int main(void)
{
	long n1, n2;
	long tmp = 0;
	long sum;

	n1 = 1;
	n2 = 2;
	sum = 2;

	while (tmp < 4000000)
	{
		tmp = n1 + n2;
		if (tmp % 2 == 0)
			sum = sum + tmp;

		n1 = n2;
		n2 = tmp;
	}
	printf("%lu\n", sum);
	return (0);
}

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
	int m = 0;
	long tmp;

	n1 = 1;
	n2 = 2;
	printf("%lu, ", n1);
	printf("%lu, ", n2);

	while (m < 48)
	{
		tmp = n1 + n2;
		if (m < 47)
			printf("%lu, ", tmp);
		else
			printf("%lu\n", tmp);
		n1 = n2;
		n2 = tmp;
		m++;
	}
	return (0);
}

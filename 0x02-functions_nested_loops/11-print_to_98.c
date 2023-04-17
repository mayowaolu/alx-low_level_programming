#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all numbers from n to 98
 * @n: starting number
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			else
				putchar('\n');
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			else
				putchar('\n');
			n--;
		}
	}
	else
	{
		printf("%d\n", n);
	}
}

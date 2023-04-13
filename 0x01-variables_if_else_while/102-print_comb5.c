#include <stdio.h>
/**
 * main - entry point
 *
 * Return: (0)
 */

int main(void)
{
	int n1 = 0;
	int n2 = 1;

	while (n1 < 99)
	{
		while (n2 < 100)
		{
			putchar((n1 / 10) + '0');
			putchar((n1 % 10) + '0');
			putchar(' ');
			putchar((n2 / 10) + '0');
			putchar((n2 % 10) + '0');

			if (n1 + n2 < 197)
			{
				putchar(',');
				putchar(' ');
			}
			n2++;
		}
		n1++;
		n2 = n1 + 1;
	}

	putchar('\n');

	return (0);
}

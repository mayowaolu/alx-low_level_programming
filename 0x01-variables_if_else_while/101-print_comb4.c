#include <stdio.h>

/**
 * main - entry for program
 *
 * Return: (0) if successful
 */
int main(void)
{
	int n = 48;
	int m = 49;
	int o = 50;
	int x = 7;
	int y = 7;
	int z = 7;
	int k = 7;

	while (n < 56)
	{
		while (m < 57)
		{
			while (o < 58)
			{
				putchar(n);
				putchar(m);
				putchar(o);
				if (n != 55)
				{
					putchar(',');
					putchar(' ');
				}
				o++;
			}
			o = o - y;
			y--;
			m++;
		}
		m = m - x;
		o = o - z;
		y = y + k;
		k--;
		z--;
		x--;
		n++;
	}
	putchar('\n');
	return (0);
}

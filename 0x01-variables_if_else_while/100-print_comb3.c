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
	int x = 8;


	while (n < 57)
	{
		while (m <= 57)
		{
			putchar(n);
			putchar(m);
			if (n != 56)
			{
				putchar(',');
				putchar(' ');
			}
			m++;
		}

		m = m - x;
		x--;
		n++;

}
	putchar('\n');
	return (0);
}

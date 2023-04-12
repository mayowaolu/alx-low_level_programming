#include <stdio.h>

/**
 * main - entry for program
 *
 * Return: (0) if successful
 */


int main(void)
{
		int n = 48;
		char c = 'a';

		while (n < 58)
		{
			putchar(n);
			n++;
		}

		while (c <= 'f')
		{
			putchar(c);
			c++;
		}

		putchar('\n');
		return (0);
}

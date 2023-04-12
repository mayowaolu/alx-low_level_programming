#include <stdio.h>
/**
 * main - entry point ofr program
 * Description: prints alphabet in lowercase
 *
 * Return: (0)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'q' || c == 'e')
		{
			c++;
			continue;
		}
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}

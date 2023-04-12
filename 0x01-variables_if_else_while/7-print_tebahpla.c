#include <stdio.h>
/**
 * main - entry point ofr program
 * Description: prints alphabet in lowercase
 *
 * Return: (0)
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}

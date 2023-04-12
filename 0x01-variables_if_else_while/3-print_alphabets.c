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
	char b = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}


	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}

	putchar('\n');
	return (0);
}

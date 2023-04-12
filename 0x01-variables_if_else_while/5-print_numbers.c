#include <stdio.h>

/**
 * main - entry point for program
 * Description: print all single digit numbers starting from 0
 *
 * Return: (0)
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');
	return (0);

}

#include "main.h"
#include <stdio.h>
/**
 * main - entry block
 * Description: compuutes and prints sum of all multiples
 * of 3 or 5 below 1024, followed by a new line
 *
 * Return: (0)
 */

int main(void)
{
	int n = 0;
	int sum = 0;

	while (n < 1024)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			sum = sum + n;
		n++;
	}
	printf("%d\n", sum);
	return (0);
}

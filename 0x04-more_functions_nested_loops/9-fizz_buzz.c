#include <stdio.h>
/**
 * main - entry block
 *
 * Return: 0
 */

int main(void)
{
	int n;

	n = 1;
	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else if (n % 5 == 0)
			printf("Buzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else
			printf("%d", n);

		printf(n != 100 ? " " : "\n");
		n++;
	}
	return (0);
}

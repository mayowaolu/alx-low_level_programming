#include <stdio.h>
/**
 * main - entry block
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long n1, n2, q1, q2, n3, r1, r2, r3;
	int i = 0;

	n1 = 1;
	n2 = 2;

	while (i < 90)
	{
		printf("%lu, %lu, ", n1, n2);
		n1 += n2, n2 += n1, i += 2;
	}
	printf("%lu, %lu, ", n1, n2);
	q1 = n1 / 100, q2 = n2 / 100;
	r1 = n1 % 100, r2 = n2 % 100;

	while (i < 96)
	{
		n3 = q1 + q2;
		r3 = r1 + r2;
		r3 > 99 ? n3++ : r3;
		r3 = r3 % 100;
		printf("%lu", n3);
		printf(r3 < 10 ? "0" : "");
		printf("%lu", r3);
		printf(i < 95 ? ", " : "\n");
		q1 = q2, q2 = n3;
		r1 = r2, r2 = r3;
		i++;
	}

	return (0);
}

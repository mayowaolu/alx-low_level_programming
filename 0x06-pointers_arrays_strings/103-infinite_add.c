#include "main.h"
/**
 * infinite_add - add two numbers, store in buffer r with size size_r
 * @n1: number
 * @n2: number
 * @r: buffer to stor result
 * @size_r: buffer size
 *
 * Return: pointer to result
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}



char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i1, i2, index_r, carry, d1, d2, sum;

	carry = 0;
	i1 = _strlen(n1) - 1;
	i2 = _strlen(n2) - 1;
	index_r = size_r - 2;

	while (i1 >= 0 || i2 >= 0)
	{
		d1 = d2 = 0;

		if (i1 >= 0)
		{
			d1 = n1[i1] - '0';
			i1--;
		}
		if (i2 >= 0)
		{
			d2 = n2[i2] - '0';
			i2--;
		}
		sum = d1 + d2 + carry;
		if (sum >= 10)
		{
			carry = 1;
			sum %= 10;
		}
		else
			carry = 0;

		if (index_r < 0)
			return (0);
		r[index_r] = sum;
		index_r--;
	}
	if (carry > 0)
	{
		if (index_r < 0)
			return (0);
		r[index_r] = carry;
		index_r--;
	}
	if (index_r < 0)
	       return (0);

	r[size_r - 1] = '\0';

	return (r);
}

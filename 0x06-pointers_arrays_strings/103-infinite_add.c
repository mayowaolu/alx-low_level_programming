#include "main.h"
/**
 * _strlen - get length of string
 * @s: string
 *
 * Return: string length
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

/**
 * digit_sum - add two numbers
 * @n1: number
 * @n2: number
 * @r: buffer to store result
 * @size_r: buffer size
 */

void digit_sum(char *n1, char *n2, char *r, int size_r)
{
	int i1 = _strlen(n1) - 1, i2 = _strlen(n2) - 1, carry = 0, sum, d1, d2;
	int index_total = size_r - 2;

	while (i1 >= 0 || i2 >= 0)
	{
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

		r[index_total] = sum + '0';
		index_total--;
	}
	if (carry > 0)
	{
		r[index_total] = carry + '0';
		index_total--;
	}
	while (index_total >= 0)
	{
		r[index_total] = '0';
		index_total--;
	}
	r[size_r - 1] = '\0';
}

/**
 * infinite_add - add two numbers, store in buffer r with size size_r
 * @n1: number
 * @n2: number
 * @r: buffer to stor result
 * @size_r: buffer size
 *
 * Return: pointer to result
 */


char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int t, o;

	if (size_r > _strlen(n1) + 1 && size_r > _strlen(n2) + 1)
	{
		digit_sum(n1, n2, r, size_r);
	}
	else
		return (0);

	t = 0;

	while (r[t] < '1' || r[t] > '9')
	{
		t++;
	}

	o = t;

	while (o < size_r)
	{
		r[o - t] = r[o];
		o++;
	}
	return (r);
}

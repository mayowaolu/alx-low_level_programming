#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an rray of integers
 * @a: pointer to array
 * @n: integer
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf(i < (n - 1) ? "%d, " : "%d\n", a[i]);
		i++;
	}
}

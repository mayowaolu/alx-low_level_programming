#include "main.h"
/**
 * reverse_array - rveerses content of array of integers
 * @a: pointer to array of integers
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	i = 0;
	while (i < n)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		i++;
		n--;
	}
}

#include "main.h"
/**
 * swap_int - swaps two integer values
 * @a: integer value
 * @b: integer value
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

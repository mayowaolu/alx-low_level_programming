#include "main.h"
/**
 * _abs - computes absolute value of integer
 * @n: integer
 *
 * Return: absolute value of integer
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (n * -1);
	else
		return (0);
}

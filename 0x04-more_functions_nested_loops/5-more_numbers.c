#include "main.h"
/**
 * more_numbers - prints 10 times the number 0-14
 */

void more_numbers(void)
{
	int i;

	i = 0;
	while (i < 14)
	{
		if (i / 10 != 0)
			_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
		i++;
	}
	_putchar('\n');
}

#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints a buffer
 * @b: pointer to string
 * @size: size of string
 */

void print_buffer(char *b, int size)
{
	int i, j, k;
	char temp[11];

	i = 0;
	if (size == 0)
		putchar('\n');
	while (i < size)
	{
		printf(i % 10 == 0 ? "%08x: " : "", i);
		j = 0;
		while (j < 10 && i + j < size)
		{
			printf(j % 2 == 1 ? "%02x " : "%02x", b[i + j]);
			temp[j] = b[i + j];
			j++;
		}
		while (j < 10)
		{
			printf(j % 2 == 1 ? "   " : "  ");
			j++;
		}
		k = 0;
		while (k < 10 && i + k < size)
		{
			if (temp[k] < 32)
				printf(".");
			else
				printf("%c", temp[k]);
			k++;
		}
		putchar('\n');
		i += j;
	}
}

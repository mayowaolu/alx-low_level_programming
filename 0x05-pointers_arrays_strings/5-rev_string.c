#include "main.h"
/**
 * rev_string - reverse string
 * @s: string
 */

void rev_string(char *s)
{
	int i, j, n;
	char tmp;

	i = 0;
	while (s[i] != '\0')
		i++;

	j = 0;
	n = i - 1;
	while (n > j)
	{
		tmp = s[j];
		s[j] = s[n];
		s[n] = tmp;
		j++;
		n--;
	}
}

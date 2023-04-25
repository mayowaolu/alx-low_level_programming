#include "main.h"
/**
 * leet - encodes string into 1337
 * @c: string
 *
 * Return: string
 */

char *leet(char *c)
{
	int i;
	char *orig_s = c;
	char leet_big[] = "aAeEoOtTlL";
	char leet_small[] = "4433007711";

	while (*c != '\0')
	{
		i = 0;
		while (i < 10)
		{
			if (*c == leet_big[i])
			{
				*c = leet_small[i];
				break;
			}
			i++;
		}
		c++;
	}

	return (orig_s);
}

#include "main.h"
/**
 * rot13 - encodes string using rot13
 * @c: string
 *
 * Return: string
 */

char *rot13(char *c)
{
	int i;
	char *orig_s = c;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*c != '\0')
	{
		i = 0;
		while (i < 52)
		{
			if (*c == input[i])
			{
				*c = output[i];
				break;
			}
			i++;
		}
		c++;
	}

	return (orig_s);
}

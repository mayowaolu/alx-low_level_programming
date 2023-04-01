#include "main.h"

/**
 * leet - encode a string into 1337
 * @str: string to be altered
 * Return: encoded string
 */

char *leet(char *str)
{
	int i = 0, j = 0;

	char big[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	char num[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (str[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == big[j])
			{
				str[i] = num[j];
				break;
			}
		}
		i++;
	}
	return (str);
}

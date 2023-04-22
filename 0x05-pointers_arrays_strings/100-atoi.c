#include "main.h"
#include <limits.h>
/**
 * _atoi - converts a string to an integer
 * @s: pointer to string s
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int i, sign, result;

	i = 0;
	sign = 1;
	result = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			if (result > INT_MAX / 10 || (result == INT_MAX / 10 && s[i] - '0' > 7))
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return (INT_MIN);
			}
			result = result * 10 + (s[i] - '0');
			if ((s[i + 1] < '0' || s[i + 1] > '9') && (s[i + 1] != '\0'))
				break;
		}
		i++;
	}

	return (result * sign);
}

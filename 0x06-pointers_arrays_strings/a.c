char *digit_sum(char *n1, char *n2)
{
	int i1 = _strlen(n1), i2 = _strlen(n2), carry, sum, d1, d2;
	int max_len = (i1 > i2 ? i1 : i2) + 2;
	char total[max_len], int index_total = max_len - 2;

	carry = d1 = d2 = 0;
	while (i1 >= 0 || i2 >= 0)
	{
		if (i1 >= 0)
		{
			d1 = n1[i1] - '0';
			i1--;
		}
		if (i2 >= 0)
		{
			d2 = n2[i2] - '0';
			i2--;
		}
		sum = d1 + d2 + carry;
		if (sum >= 10)
		{
			carry = 1;
			sum %= 10;
		}
		else
			carry = 0;

		total[index_total] = sum + '0';
		index_total--;
	}
	if (carry > 0)
	{
		total[index_total] = carry + '0';
		index_total--;
	}
	while (index_total >= 0)
	{
		total[index_total] = '0';
		index_total--;
	}
	return (total);
}

char	tolower_(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return c;
}

int gdigit(char c, int base)
{
	int maxdigit;
	if (base <= 10)
		maxdigit = base + '0';
	else
		maxdigit = base + 87;

	if (c >= '0' && c <= '9' && c <= maxdigit)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= maxdigit)
		return (10 + c - 97);
	else
		return (-1);
}

int ft_atoi_base(const char *str, int str_base)
{
	int digit = 0, result = 0, op = 1;

	if (*str == '-')
	{
		op = -1;
		str++;
	}
	while ((digit = gdigit(tolower_(*str), str_base)) >= 0)
	{
		result *= str_base;
		result += digit * op;
		str++;
	}
	return (result);
}
//geçiyor mu denemedim.

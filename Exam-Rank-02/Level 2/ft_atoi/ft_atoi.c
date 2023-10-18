int	ft_atoi(const char *str)
{
	int i = 0;
	int op = 1;
	int result = 0;

	while(str[i] <= 32)
		i++;
	if(str[i] == '-')
	{
		op = -1;
		i++;
	}
	else if(str[i] == '+')
		i++;
	if(str[i] == '-' || str[i] == '+')
		return 0;
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10;
		result = result + str[i] - '0';
		i++;
	}
	return result * op;
} 

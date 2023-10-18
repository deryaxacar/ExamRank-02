char *ft_strrev(char *str)
{
	int i = -1, j = 0;
	int tmp;

	while(str[j])
		j++;
	while(--j > ++i)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
	return str;
}

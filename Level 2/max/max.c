int	max(int *tab, unsigned int len)
{
	unsigned int i = 0;
	int result = tab[i];

	while(i < len)
	{
		if (result < tab[i])
			result = tab[i];
		i++;
	}
	return result;
}

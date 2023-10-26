void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i, j;
	int tmp;

	while(i < size)
	{
		j = i;
		while(j < size)
		{
			if(tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

#include <unistd.h>

int	check(char *str, char c, int n)
{
	int i = 0;

	while(i < n)
	{
		if(str[i] == c)
			return 0;
		i++;
	}
	return 1;
}

int main(int ac, char **av)
{
	int i = 0, j = 0;

	if(ac == 3)
	{
		while(av[1][i])
		{
			j = 0;
			while(av[2][j])
			{
				if(av[1][i] == av[2][j++] && check(av[1], av[1][i], i) == 1)
				{
					write(1, &av[1][i], 1);
					break;
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
}

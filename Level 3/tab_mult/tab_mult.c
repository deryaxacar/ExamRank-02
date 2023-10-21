#include <unistd.h>

int	ft_atoi(char *str)
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
	return (result * op);
}

void	ft_putnbr(int nb)
{
	if(nb > 9)
		ft_putnbr(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
}

int main(int ac, char **av)
{
	int i = 1;

	if(ac == 2)
	{
		int nbr = ft_atoi(av[i]);

		while(i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(nbr);
			write(1, " = ", 3);
			ft_putnbr(i * nbr);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}

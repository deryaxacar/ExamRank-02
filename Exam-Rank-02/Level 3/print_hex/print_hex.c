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

void	ft_print_hex(int nb)
{
	if(nb >= 16)
		ft_print_hex(nb / 16);
	write(1, &"0123456789abcdef"[nb % 16], 1);
}

int main(int ac,char **av)
{
	if(ac == 2)
	{
		ft_print_hex(ft_atoi(av[1]));
	}
	write(1, "\n", 1);
}

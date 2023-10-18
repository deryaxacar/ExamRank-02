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

int	is_prime(int n)
{
	int i = 2;
	if(n <= 0)
		return 0;
	while(i < n)
	{
		if(n % i == 0)
			return 0;
		i++;
	}
	return 1;
}

void	ft_print(int nb)
{
	if(nb > 9)
		ft_print(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
}

int main(int ac, char **av)
{
	if(ac == 2)
	{
		int number = ft_atoi(av[1]);
		int result = 0;
		while(number > 1)
		{
			if(is_prime(number--))
				result += number + 1;
		}
		ft_print(result);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}

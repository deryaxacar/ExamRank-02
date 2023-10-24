#include <unistd.h>

int main(int ac, char **av)
{
	int start, end, flag, i = 0;
		
	if(ac == 2)
	{   
		while(av[1][i] != '\0')
			i++;
		while(i >= 0)
		{
			while(av[1][i] == ' ' || av[1][i] == '\t' || av[1][i] == '\0')
				i--;
			end = i;
			while(av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
				i--;
			start = i + 1;
			flag = start;
			while(start <= end)
				write (1, &av[1][start++],1);
			if(flag)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
}

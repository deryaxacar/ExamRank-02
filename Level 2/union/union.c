#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	char a[256];

	if(ac == 3)
	{
		for(i = 0;i < 256;i++)
			a[i] = 0;
		for(int i = 0; av[1][i]; i++)
			if(!a[(int)av[1][i]]++)
				write(1, &av[1][i], 1);
		for(int i = 0; av[2][i]; i++)
			if(!a[(int)av[2][i]]++)
				write(1, &av[2][i], 1);
	}
	write(1, "\n", 1);
}

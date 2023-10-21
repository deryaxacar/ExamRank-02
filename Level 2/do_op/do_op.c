#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if(ac == 4)
	{

		int x = atoi(av[1]);
		int y = atoi(av[3]);
		char c = av[2][0];

		if(c == '+')
			printf("%d", x + y);
		else if(c == '-')
			printf("%d", x - y);
		else if(c == '*')
			printf("%d", x * y);
		else if(c == '/')
			printf("%d", x / y);
		else if(c == '%')
			printf("%d", x % y);
	}
	printf("\n");
}

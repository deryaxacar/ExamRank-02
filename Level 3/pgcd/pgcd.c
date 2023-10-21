#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if(ac == 3)
	{
		int x = atoi(av[1]);
		int y = atoi(av[2]);

		if(x <= 0 || y <= 0)
			return 0;
		while(x != y)
		{
			if(x > y)
				x -= y;
			else
				y -= x;
		}
		printf("%d", x);
	}
	printf("\n");
}

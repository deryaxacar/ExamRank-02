#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
	if(ac == 2)
	{
		int num = atoi(av[1]);
		int i = 2;
		if(num == 1)
			printf("1");
		while(i <= num)
		{
			if(num % i == 0)
			{
				printf("%d", i);
				if(num == i)
					break;
				printf("*");
				num /= i;
				i = 1;
			}
			i++;
		}
	}
	printf("\n");
}

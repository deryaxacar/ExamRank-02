#include <unistd.h>

int main(int ac, char **av)
{
          int i = 0, end, start;
          if(ac == 2)
          {
                    while(av[1][i] != '\0')
                              i++;
                    i--;
                    while(av[1][i] && av[1][i] <= 32)
                              i--;
                    end = i;
                    while(av[1][i] && av[1][i] > 32)
                              i--;
                    start = i + 1;
                    while(start <= end)
                              write(1, &av[1][start++], 1);

          }
          write(1, "\n", 1);
}
//sınavda geçirdim.
